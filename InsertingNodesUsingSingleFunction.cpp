#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
int Count(struct node *n)
{
    int c=0;
    while(n!=NULL)
    {
        n=n->next;
        c=c+1;
    }
    return c;
}
void printList(struct node *n)
{
    while(n!=NULL)
    {
        printf("%d ",n->data);
        n=n->next;
    }
}

void insertNode(struct node* temp,struct node **point, int pos, int val, int NumOfVal)
{
    struct node *start=(struct node*)malloc(sizeof(struct node));
    start->data=val;
    if(pos==0)
    {
        start->next=*point;
        *point=start;
    }
    else
    {
        int i;
        for(i=1;i<pos;i++)
        {
            if(temp->next!=NULL)
                temp=temp->next;
            else
            {
                printf("\nThe position given is not possible since %d is the max length\n",i);
                break;
            }
        }
        if(i<NumOfVal)
        {
            start->next=temp->next;
            temp->next=start;
            if(temp->next!=NULL)
                temp=temp->next;
        }
        else if(i==NumOfVal)
        {
            temp->next=start;
            start->next=NULL;
        }
    }
    
}

int main() {
	// your code goes here
	struct node* first=NULL;
	struct node * second=NULL;
	struct node * third=NULL;
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
	//couting the number of nodes in a LIST
	int count=Count(first);
	printf("\nThe number of nodes in List is :-  %d\n",count);
	//adding the node at the starting with value 4
	printf("\nAfter inserting node at the begining with value 4\n");
	int position=0;
	int value=4;
	insertNode(first,&first,position,value,count);
	printList(first);
	count=Count(first);
	printf("\nThe number of nodes in List is :-  %d\n",count);
	//adding the node at the end of the List with value of 5
	printf("\nAfter inserting node at the end with value 5\n");
	position=count;
	value=5;
	insertNode(first,&first,position,value,count);
	printList(first);
	count=Count(first);
	printf("\nThe number of nodes in List is :-  %d\n",count);
	value=6;
	//adding the node at the middle position with value=6
	printf("\nAfter inserting node at the middle with value 5\n");
	position=count/2;
	insertNode(first,&first,position,value,count);
	printList(first);
	return 0;
}
