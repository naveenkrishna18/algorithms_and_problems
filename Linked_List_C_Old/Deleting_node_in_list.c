#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* delete(struct node *p,struct node* q,int pos)
{
    pos=pos-1;
    if(pos==0)
    {
        struct node* temp = p->next;
        free(p);
        return temp;
    }
    else
    {
        int i;
        while(i<pos)
        {
            q=p;
            p=p->next;
            i++;
        }
        q->next=p->next;
        free(p);
        return NULL;
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
    display(first);
    struct node *y;
    y=delete(first,NULL,1);
    if(y!=NULL)
    {
        first=y;
    }
    display(first);
}