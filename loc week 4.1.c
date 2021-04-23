#include <stdio.h>

int main()  
{
    int m,n;
    scanf("%d %d\n",&m,&n);
int a[m][n],b[m][n],i,j;
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    { 
scanf("%d ",*(a+i)+j);
}
scanf("\n");
}
scanf("\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d ",*(b+i)+j);
    }
    scanf("\n");
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d ",*(*(a+i)+j)+*(*(b+i)+j));
    }
    printf("\n");
}
	return 0;
}

