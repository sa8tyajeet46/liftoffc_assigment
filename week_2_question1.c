#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int k,r;
    printf("enter the number:\n");
    scanf("%d\n",&k);
    r=0;
    while(k>0)
    {
        r=r+k%10;
        k=k/10;
    }
    printf("the sum of digits=%d",r);
return 0;
}