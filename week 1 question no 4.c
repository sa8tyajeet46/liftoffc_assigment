#include<stdio.h>
#include<stdlib.h>
int main()
{
float a,b,c,d,e,sum,per;
printf("enter the marks\n");
scanf("%f %f %f %f %f ",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
per=(sum/500)*100;
if(per>=90)
{
    printf("percentage = %f,grade=A",per);
}
else if(per>=80)
{
    printf("percentage=%f,grade=B",per);
}
else if(per>=70)
{
    printf("percentage=%f,grade=C",per);
}
else if(per>=60)
{
    printf("percentage=%f,grade=D",per);
}
else if(per>=40)
{
    printf("percentage=%f,grade=E",per);
}
else
{
    printf("percentage=%f,grade=F",per);
}

    return 0;
}