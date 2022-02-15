// Kadane's Algoritham 
#include<stdio.h>
int max(int a,int b)
{
    return a>b?a:b;
}
int kadane(int arr[],int n)
{
    int curr_max=arr[0],max_so_far=arr[0];
    for(int i=0;i<n;i++)
    {
        curr_max= max(arr[i],curr_max+arr[i]);
        if(curr_max>max_so_far)
        {
            max_so_far=curr_max;
        }
    }
    return max_so_far;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",kadane(arr,n));
}