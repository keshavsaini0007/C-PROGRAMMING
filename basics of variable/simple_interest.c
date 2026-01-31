#include <stdio.h>
int main ()
{
 float price,rate,Time,intrest;
 
 printf("enter price :- ");
 scanf("%f",&price);
 
 printf("enter rate:- ");
 scanf("%f",&rate);

 printf("enter Time:- ");
 scanf("%f",&Time);

 intrest = (price*rate*Time)/100;
 printf("%f",intrest);
 
 return 0;
}

