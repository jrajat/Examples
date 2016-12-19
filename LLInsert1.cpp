#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node 
{
    int data;
    struct node *next;
};

void printLink(struct node *n)
{
    while(n!=NULL)
    {
        printf("%d ",n->data);
        n=n->next;
    }
}

void InsertAtPosition(struct node **fir,struct node **Ins, int position)
{
    int count=0;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp=*fir;
    struct node *fir1=*fir;
    struct node *Ins1=*Ins;
    while(temp!=NULL)
    {
        if(position==0)
        {
            fir1=Ins1;
            fir1->next=temp;
            break;
        }
        else if(count==position)
        {
            Ins1-> next=temp->next;
            temp-> next=Ins1;
            count+=1;
        }
        temp=temp->next;
    }
}

int main() {
	// your code goes here
	node *first=NULL;
	node *second=NULL;
	node  *third=NULL;
	first=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	
	printf("before Adding element\n");
	first->data=1;
	first->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	
	printLink(first);
	
	//now i need to add the fourth link list at 2nd position
	printf("\nAfter adding element\n");
	node *fourth=NULL;
	fourth=(struct node *)malloc(sizeof(struct node));
	fourth->data=4;
	int pos=1;
	InsertAtPosition(&first,&fourth,pos);
	printLink(first);
	return 0;
}
