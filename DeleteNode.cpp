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

void DeleteNode(struct node *n, struct node **p, int pos, int numVar)
{
    if(numVar>=pos)
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp=n;
        if(pos==1)
        {
            *p=temp->next;
            free(temp);
        }
        else
        {
            for(int i=1;i<pos-1;i++)
                temp=temp->next;
            struct node* freeNode=temp->next;
            temp->next=temp->next->next;
            free(freeNode);
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
	struct node *fourth=(struct node*)malloc(sizeof(struct node));
	first->data=1;
	first->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=fourth;
	
	fourth->data=4;
	fourth->next=NULL;
	printList(first);
	//couting the number of nodes in a LIST
	int count=Count(first);
	printf("\nThe number of nodes in List is :-  %d\n",count);
	printf("\n");
	printf("\nDelete 3rd node from start\n");
	int val=2;
	DeleteNode(first,&first,val,count);
	printList(first);
	count=Count(first);
	printf("\nThe number of nodes in List is :-  %d\n",count);
	// *****************************************************************
	printf("\nDelete 1st node from start\n");
	val=3;
	DeleteNode(first,&first,val,count);
	printList(first);
	count=Count(first);
	printf("\nThe number of nodes in List is :-  %d\n",count);
	return 0;
}
