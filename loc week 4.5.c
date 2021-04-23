#include <stdio.h>
#include<string.h>

int main(void) {
char a[20],b[20];
scanf("%s\n",a);
scanf("%s\n",b);
int i,j,k,g,p=0;
int l=strlen(b);
for(i=0;a[i]!='\0';i++)
{
    k=i;
    g=i;
    for(j=0;j<l;j++)
    {
     
        if(b[j]!=a[k])
        {
            p=1;
            break;
        }
        else
        {
            k++;
        }
        if(k-g==l)
        {
            printf("yes\n");
        }
    }
}
	return 0;
}

