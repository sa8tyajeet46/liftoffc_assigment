#include<stdio.h>
#include<stdlib.h>
int main()
{
char alp;
printf("enter the alphabet\n");
scanf("%c",&alp);
switch(alp)
{
    case 'a' :printf("it is a vowel");
    break; 
    case 'e' :printf("it is a vowel");
    break;
    case 'i' :printf("it is a vowel");
    break;
    case 'o' :printf("it is a vowel");
    break;
    case 'u' :printf("it is a vowel");
    break;
    default :printf("it is a consonant");
}

    return 0;
}