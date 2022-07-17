#include<stdio.h>
#include<stdlib.h>

int cost = 0,graph[4][4],visited[4];
void takeInput()
{
    int i,j;
    printf("Enter the values : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++){
            scanf("%d\t",&graph[i][j]);
        }
    }
    printf("The graph is : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++){
            printf("%d\t",graph[i][j]);
        }
        printf("\n");
    }
}

int find_next_node(int node)
{
    int nd,min = INT_MAX, min_index,democost,i;

    for(i=0;i<4;i++)
    {
        if(!visited[i] && graph[node][i] != 0&&graph[node][i]<min)
        {
            democost = graph[node][i];
            min = graph[node][i];
        }
    }

    nd = min_index;
    cost += democost;

    return nd;
}

void TSP(int node)
{
    int next_node;
    visited[node] = 1;
    printf("node-> ");

    next_node = find_next_node(node);

    if(next_node == INT_MAX)
    {
        int v = 0;
        cost +=graph[next_node][v];
        printf("%d",v);
        return;
    }
    TSP(next_node);
}

int main()
{
    takeInput();
    int i;
    for(i=0;i<4;i++)
        visited[i] = 0;
    int start;
    printf("Enter start node : \n");
    scanf("%d",&start);
    printf("TSP path\n");

    TSP(start);
    return 0;
}