#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void remove_duplicate(struct node* p,struct node* q)
{
    while(q!=NULL)
    {
        if(p->data==q->data)
        {
            p->next=q->next;
            free(q);
            q=p->next;
        }
        else
        {
            p=p->next;
            q=q->next;   
        }
    }
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
    //display(first);
    remove_duplicate(first,first->next);
    display(first); 
}