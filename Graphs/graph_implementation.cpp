#include<bits/stdc++.h>

using namespace std;

class Edge
{
public:
    int DestinationVertexID;
    int weight;
Edge(){

}
Edge(int destVID,int w){
    DestinationVertexID = destVID;
    weight = w;
}

void setEdgeValues(int destVID,int w){
    DestinationVertexID = destVID;
    weight = w;
}
void setWeight(int w){
    weight = w;
}
};