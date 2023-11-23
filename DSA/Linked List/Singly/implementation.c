#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *initialize()
{
    struct node *newnode, *temp;
    struct node *head = NULL;
    int ch;
    while(1)
    {
         newnode = (struct node*) malloc (sizeof(struct node));
         printf("\nEnter the data\n");
         scanf("%d",&newnode->data);
         newnode->next = NULL;
         if (head==NULL)
         {
            head=temp=newnode;
         }
         else
         {
            temp->next=newnode;
            temp=newnode;
         }
         printf("\n press 0 for terminate or 1 to continue \n");
         scanf("%d",&ch);
         if(ch==0)
         {
            break;
         }
    }
    return head;

}
void traversell(struct node *head)
{
    struct node *ptr = head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node *head;
    head=initialize();
    traversell(head);
    return 0;
}