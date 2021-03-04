#include<stdio.h>
#include<stdlib.h>
unsigned int fact(unsigned int k)
{
    if(k<=1)
    {
        return 1;
    }
    else
    {
        return k*fact(k-1);
    }
}
int main()
{ 
 unsigned  int a;
    printf("enter two number:"); 
    scanf("%d",&a);
    printf("\n%d!=%d",a,fact(a));
    
    return 0;
}