#include<stdio.h>
#include<math.h>
int Fibonacci(int n)
{
    return ceil((pow(((1.0+sqrt(5))/2.0),n)-pow(((1.0-sqrt(5))/2.0),n))/sqrt(5));
}
int main()
{
    int n;
    printf("Enter the Value of n : ");
    scanf("%d",&n);
    printf("\n%d th Fibonacci number is : %d",n,Fibonacci(n));
}