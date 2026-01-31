#include<stdio.h>
int main ()
{
 float l,b,h,pi,volume ;
 printf("Enter length :- ");
 
 scanf("%f",&l);
  printf("Enter breadth:- ");

  scanf("%f",&b);
 printf("Enter height:- ");
 scanf("%f",&h);

 pi = 3.14519;
 volume = l*b*h;
 
 printf("the voulme of cuboid is :- %f",volume );
 return 0;
}