#include<stdio.h>
#include<stdlib.h>
int gcd(int m,int n)
{
   if(n==0)
   {
       return m;
   }
   else if(m<n)
   {
       return gcd(n,m);
   }
   else
   {
       return gcd(n,m%n);
   }
} 
 int lcm(int p,int q)
 {
   static int x=0;
     x=x+p;
     if(x%p==0&&x%q==0)
     {
         return x;
     }
     else
     {
         
         return lcm(p,q);
     } 
         
 }
int main()
{ 
   int a,b;
    printf("enter two numbers:"); 
    scanf("%d %d",&a,&b);
    printf("\ngcd of the numbers=%d",gcd(a,b));
    printf("\nlcm of the numbers=%d",lcm(a,b));
    return 0;
}