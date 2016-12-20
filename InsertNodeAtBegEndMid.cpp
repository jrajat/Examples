#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void printList(struct node *n)
{
    while(n!=NULL)
    {
        printf("%d ",n->data);
        n=n->next;
    }
}

void insertNodeAtBeg(node* strt, node *beg, int value)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp=strt;
    
}
int main() {
    struct node *first;
    struct node *second;
    struct node *third;
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    first->data=1;
    first->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=NULL;
    
    printList(first);
	// your code goes here
	
	printf("\nEntering the node at the starting\n");
	//want to end nuber 4 at the starting
	struct node *start=(struct node*)malloc(sizeof(struct node));
	start->data=4;
	start->next=first;
	first=start;
	printList(first);
	
	printf("\nInsert the node at the end\n");
	struct node *end=(struct node*)malloc(sizeof(struct node));
	end->data=5;
	struct node *temp=first;
	while(temp->next!=NULL)
	{
	    temp=temp->next;
	}
	temp->next=end;
	printList(first);
	
	printf("\n Insert the node at the 4th position with value of 6\n");
	struct node*middle=(struct node*)malloc(sizeof(struct node));
	middle->data=6;
	//Right Now it's 4 1 2 3 5
	int count=1;
	int position=4;
	struct node*temp1=first;
    for(int i=count;i<position-1;i++)
    {
        temp1=temp1->next;
    }
    middle->next=temp1->next;
    temp1->next=middle;
    printList(first);
	return 0;
}
