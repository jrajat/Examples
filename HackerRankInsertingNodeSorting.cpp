/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    struct Node* node=NULL;
    struct Node* node1=NULL;
    struct Node* head1=NULL;
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    node=head;
    node1=head;
    head1=head;
    if(head->next==NULL)
    {
        temp->data=data;
        node->next=temp;
        node=node->next;
        node->next=NULL;
    }
    else
    {
        int count=0;
        while(node->next!=NULL)
        {
            count++;
            node=node->next;
        }
        node=head;
        node1=head->next;
        while(node1!=NULL)
        {
            int x=node1->data;
            if(x>data)
            {
                temp->data=data;
                node->next=temp;
                temp->next=node1;
                node1->prev=temp;
                node1->next=NULL;
            }
            else
            {
                temp->data=data;
                node1->next=temp;
                temp->prev=node1;
                temp->next=NULL;
            }
            node=node1;
            node1=node1->next;
        }
    }
    return head1;
    // Complete this function
   // Do not write the main method.
}
