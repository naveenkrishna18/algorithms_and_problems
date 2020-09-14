#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    int i,j,len,flag=1;
    int hash[26];
    scanf("%[^\n]s",str);
    len=strlen(str);
    for(i=0;i<26;i++)
    {
        hash[i]=0;   
    }
    for(i=0;i<len;i++)
    {
        hash[str[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(hash[i]==0)
        {
            printf("Not Pangram");
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("Pangram");
    }

}