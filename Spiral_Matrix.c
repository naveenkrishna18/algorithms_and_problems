// Printing a NxN spiral matrix 
/*sample test case 
input : 5
output : 01 02 03 04 05
         16 17 18 19 06
         15 24 25 20 07
         14 23 22 21 08
         13 12 11 10 09
*/
#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d",&n);
    int top=0,left=0,bottom=n-1,right=n-1;
    int val=1,i,j;
    int mat[n][n];
    while(left<=right && top<=bottom)
    {
        for(i=left;i<=right;i++)
        {
            mat[top][i]=val;
            val++;
        }
        top++;
        for(i=top;i<=bottom;i++)
        {
            mat[i][right]=val;
            val++;
        }
        right--;
        for(i=right;i>=left;i--)
        {
            mat[bottom][i]=val;
            val++;
        }
        bottom--;
        for(i=bottom;i>=top;i--)
        {
            mat[i][left]=val;
            val++;
        }
        left++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%02d ",mat[i][j]);
        }
        printf("\n");
    }
}