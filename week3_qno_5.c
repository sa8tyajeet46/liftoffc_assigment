#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
bool del(char a[],int n,int s)
{
    if(s%2==0)
    { 
    if(n==s)
    { 
    return true;
    }
    }
    else
    {
        if(n==s+1)
        {
            return true;
        }
    }
    if(a[n]!=a[s])
    {
        return false;
    }
    if(n<s+1)
    {
        return del(a,n+1,s-1);
    }
}
int main()
{
    char a[20];
    scanf("%s",a);
    int k=strlen(a);
    if(del(a,0,k-1))
    {
        printf("yes");
    }
    else 
    {
        printf("no");
    }
    return 0;
}