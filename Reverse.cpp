#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node
{
    char data;
    struct Node* next;
};
struct Node* createNode(char ch)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=ch;
    temp->next=NULL;
    return temp;
}
void Push(struct Node** node, char ch)
{
    struct Node* temp=createNode(ch);
    temp->next=*node;
    *node=temp;
    printf("%c value pushed in stack\n",ch);
}
void Print(struct Node* temp)
{
    while(temp!=NULL)
    {
        printf("%c",temp->data);
        temp=temp->next;
    }
}

int main() {
    char ch[]={'a','b','c','d','e','\0'};
    int size=sizeof(ch)/sizeof(ch[0]);
    printf("%d\n",size);
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    printf("%s\n",ch);
    for(int i=0;i<size-1;i++)
        Push(&node,ch[i]);
    Print(node);
	// your code goes here
	return 0;
}
