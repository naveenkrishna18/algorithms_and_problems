#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void display(struct node* temp)
{
    printf("Elements in the list : ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    struct node *first,*last;
    first=(struct node*)malloc(sizeof(struct node));
    int x;
    printf("Printing The Elements In The Linked List\n");
    printf("Use -1 to get out and print the result\n");
    printf("Enter element 1 : ");
    scanf("%d",&x);
    first->data=x;
    first->next=NULL;
    last=first;
    printf("Enter element 2 : ");
    scanf("%d",&x);
    int count=2;
    while(x!=-1)
    {
        count++;
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node*));
        temp->data=x;
        last->next=temp;
        last=temp;
        temp->next=NULL;
        printf("Enter element %d : ",count);
        scanf("%d",&x);
    }
    display(first);
}