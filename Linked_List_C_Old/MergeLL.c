#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void display(struct node* temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
struct node* Merge_Linked_List(struct node *first,struct node *second)
{
    struct node *third,*last;
    if(first->data < second->data)
    {
        third=last=first;
        first=first->next;
        last->next=NULL;
    }
    else
    {
        third=last=second;
        second=second->next;
        last->next=NULL;
    }
    while(first!=NULL && second!=NULL)
    {
        if(first->data < second->data)
        {
            last->next=first;
            last=first;
            first=first->next;
            last->next=NULL;
        }
        else
        {
            last->next=second;
            last=second;
            second=second->next;
            last->next=NULL;
        }
    }
    if(first!= NULL)
    {
        last->next=first;
    }
    else
    {
        last->next=second;
    }
    return third;
}
struct node* create()
{
    struct node *first,*last;
    first=(struct node*)malloc(sizeof(struct node));
    int x;
    scanf("%d",&x);
    first->data=x;
    first->next=NULL;
    last=first;
    scanf("%d",&x);
    while(x!=-1)
    {
        struct node *temp= (struct node*)malloc(sizeof(struct node));
        temp->data=x;
        temp->next=NULL;
        last->next=temp;
        last=temp;
        scanf("%d",&x);
    }
    return first;
}
int main()
{
    struct node *one,*two,*three;
    printf("Enter the Elements Of First Linked list : ");
    one=create();
    printf("\nEnter the Elements Of Second Linked list : ");
    two=create();
    three=Merge_Linked_List(one,two);
    printf("\nThe Merged Linked List : ");
    display(three);

}