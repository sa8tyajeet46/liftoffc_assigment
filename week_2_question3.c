#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ 
char a[1000];
int i,k;
k=1;
printf("enter the string only one space separated after a word:\n");
gets(a);
for(i=0;a[i]!='\0';i++)
{
 if(a[i]==' ')  
 {
     k++;
 }
} 
printf("the number of words=%d",k);
return 0;
} 