#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("Printing Prime Numbers\n");
    printf("Enter The Limit : ");
    scanf("%d",&n);
    int a[n-1];
    for(i=0;i<n-1;i++)
    {
        a[i]=i+2;
    }
    int squrert=sqrt(n);
    for(i=0;a[i]<=squrert;i++)
    {
        if(a[i]!=-1)
        {
            for(j=a[i]*a[i]-2;j<=n-2;j=j+a[i])
            {
                a[j]=-1;
            }
        }
    }
    printf("The Prime Numbers Present Between 2 and %d : ",n);
    for(i=0;i<=n-2;i++)
    {
        if(a[i]!=-1)
        {
            printf("%d ",a[i]);
        }
    }
}