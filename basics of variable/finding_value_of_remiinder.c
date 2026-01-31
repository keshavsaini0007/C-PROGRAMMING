#include <stdio.h>

int main()
{
 float a,b;
 printf("enter value of numerator:-");
 scanf("%f",&a);
 
 printf("enter the value of denominator:-");
 scanf("%f",&b);
 
 int q,r;
 q = a/b;
 r = a-(q*b);
 
 printf("the value of reminder is:- ");
 printf("%d",r);
 
 return 0;
}
