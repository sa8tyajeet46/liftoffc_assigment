#include<stdio.h>
#include<stdlib.h>

int main()
{ 
    int i,j,p,k;
    printf("enter the limit:\n");
    scanf("%d\n",&k); 
    int a[k]; 
    printf("enter the array space separated:\n");
    for(i=0;i<k;i++)
    {
        scanf("%d ",&a[i]); 
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        { 
            if(a[i]>a[j])
            { 
            p=a[i];
            a[i]=a[j];
            a[j]=p;
            }
        }
    }
    printf("the smallest number is %d and greatest number is %d",a[0],a[k-1]);
return 0;
}