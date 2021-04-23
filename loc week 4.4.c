#include <stdio.h>
#include<string.h>
int main()  
{
    union a
    {
        char n[100];
        char r[100];
    };
    union a var;
        scanf("%s ",var.n);
        printf("%s ",var.n);
        scanf("%s ",var.r);
        printf("%s ",var.r);
    
    
	return 0;
}

