#include<stdio.h>
#include<stdlib.h>
int sq(int k)
{
    return k*k;
} 
int main()
{ 
    int t;
    printf("enter the number:"); 
    scanf("%d",&t);
    printf("\nsquare of the number is %d",sq(t));
    return 0;
}