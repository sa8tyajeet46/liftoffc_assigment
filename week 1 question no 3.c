#include<stdio.h>
#include<stdlib.h>
int main()
{
float r;
printf("enter the radius of the circle:\n");
scanf("%f",&r);
printf("diameter of the circle=%f\n",2*r);
printf("circumference of circle=%f\n",2*3.14*r);
printf("area of the circle =%f\n",3.14*r*r);
    return 0;
}