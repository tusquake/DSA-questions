#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};
struct node* head = NULL;

int main(){
    struct node* head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    
    struct node* ptr = head;
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 67);
    // printf("%d",head->data);
    ptr = head;
     while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr = ptr->link;
    }
    
    // insert(head);
    // count_of_nodes(head);
    // print_data(head);
}

struct node* add_at_end(struct node* head,int data){
    struct node* ptr;
    struct node* temp;

    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link=NULL;

    ptr = head;
     while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr = ptr->link;
    ptr->link =temp;
    return temp; 
    }
    
}

// void insert(struct node* head){
//     struct node* head = NULL;
//     head = (struct node*)malloc(sizeof(struct node));
//     head->data = 45;
//     head->link = NULL;

//     struct node* current = NULL;
//     head = (struct node*)malloc(sizeof(struct node));
//     current->data = 98;
//     current->link = NULL;
//     head->link = current;

//     current = malloc(sizeof(struct node));
//     current->data= 3;
//     current->link = NULL;
//     head->link->link = current;

// }

void count_of_nodes(struct node* head){
    int count = 0;
    if(head==NULL){
        printf("Linked list is empty");
    }
    struct node* ptr = NULL;
    ptr = head;
    while(ptr!=NULL){
        ptr = ptr->link;
        count++;
    }
    printf("%d",count);
}
void print_data(struct node* head){
    int count = 0;
    if(head==NULL){
        printf("Linked list is empty");
    }
    struct node* ptr = NULL;
    ptr = head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr = ptr->link;
    }
    
}