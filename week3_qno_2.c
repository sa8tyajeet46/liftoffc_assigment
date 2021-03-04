#include<stdio.h>
#include<stdlib.h>
unsigned int fact(unsigned int k)
{
   unsigned int i,r=1; 
   if(k==0)
   {
       return 1;
   }
   else
   { 
   for(i=2;i<k+1;i++)
   {
       r=r*i;
   } 
   }
    return r;
} 
int main()
{ 
  unsigned  int t;
    printf("enter the number:"); 
    scanf("%d",&t);
    printf("\nfactorial of the number is: %d",fact(t));
    return 0;
}