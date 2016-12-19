#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node
{
    node *next;
    int data;
};

void printList(struct node *n)
{
    while(n!=NULL)
    {
        printf("%d ",n->data);
        n=n->next;
    }
}
void insertNode(struct node *prev,int new_data)
{
    if(prev==NULL)
        printf("the given previous node can't be zero");
    else
    {
        struct node *new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=new_data;
        new_node->next=prev->next;
        prev->next=new_node;
    }
}

int main() {
    struct node* first=NULL;
    struct node *second =NULL;
    struct node * third=NULL;
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    struct node* fourth=(struct node*)malloc(sizeof(struct node));
    struct node* fifth=(struct node*)malloc(sizeof(struct node));
    first->data=1;
    first->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=fourth;
    
    fourth->data=5;
    fourth->next=fifth;
    
    fifth->data=6;
    fifth->next=NULL;
    
    printf("Before inserting the new link\n");
    printList(first);
    printf("\nAdding value 4th at the 4th position\n");
    int pos=4;
    int count=1;
    struct node *head=first;
    for(int i=count;i<pos-1;i++)
    {
        head=head->next;
    }
    insertNode(head,4);
    printList(first);
	// your code goes here
	return 0;
}
