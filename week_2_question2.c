#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int k;
    printf("enter the limit of the array:\n"); 
    scanf("%d\n",&k);
    int a[k];
    int i,s;
    s=0; 
    printf("enter the values space separated:\n");
    for(i=0;i<k;i++)
    {
        scanf("%d ",&a[i]);
    } 
    for(i=0;i<k;i++)
    {
        if(a[i]%2==0||i%2==0)
        {
            s=s+a[i];
        }
    }
    printf("the required sum is=%d",s);
} 