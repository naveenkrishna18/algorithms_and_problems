#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
int issort(struct node* temp)
{
    int ele=0;
    while(temp!=NULL)
    {
        if(temp->data<ele)
        {
            return 0;
        }
        else
        {
            ele=temp->data;
            temp=temp->next;
        }
    }
    return 1;
}
void display(struct node* temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
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
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node*));
        temp->data=x;
        last->next=temp;
        last=temp;
        temp->next=NULL;
        scanf("%d",&x);
    }
    display(first);
    int s;
    s=issort(first);
    if(s==1)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
    
}