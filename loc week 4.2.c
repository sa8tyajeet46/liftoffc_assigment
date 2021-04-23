#include <stdio.h>
#include<string.h>
int main()  
{
int l,i;
scanf("%d\n",&l);
char p[l];
gets(p);
char *u=p;
for(i=l;i>=0;i--)
{
    printf("%c",*(u+i));
}
	return 0;
}

