#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;   
};
void display(struct node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void concatenate(struct node* first,struct node* second)
{
    while(first->next!=NULL)
    {
        first = first->next;
    }
    first->next=second;
}
struct node* create()
{
    struct node *first,*last;
    first = (struct node*)malloc(sizeof(struct node));
    int x;
    scanf("%d",&x);
    first->data=x;
    last =first;
    last->next=NULL;
    scanf("%d",&x);
    while(x!=-1)
    {
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        temp->data=x;
        last->next=temp;
        last=temp;
        last->next = NULL;
        scanf("%d",&x);
    }
    return first;
}
int main()
{
    struct node *first,*second;
    printf("Enter the Elements of First Linked List : ");
    first=create();
    printf("\nEnter the Elements of Second Linked List : ");
    second=create();
    printf("\nThe Concatenated Linked List is : ");
    concatenate(first,second);
    display(first);
}