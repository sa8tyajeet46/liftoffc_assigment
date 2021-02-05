#include<stdio.h>
#include<stdlib.h>
int main()
{
float c,k;
printf("enter temperature in celsius:\n");
scanf("%f",&c);

k=(c*9)/5+32;
printf("temperature in fahrenheit=%f",k);
    return 0;
}