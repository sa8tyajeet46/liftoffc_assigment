#include <stdio.h>
#include<string.h>
int main()  
{
    struct a
    {
        char n[100];
        int r;
    };
    int i;
    struct a arr[5];
    for(i=0;i<5;i++)
    {
        scanf("%s ",arr[i].n);
        scanf("%d ",&arr[i].r);
    }
    
	return 0;
}

