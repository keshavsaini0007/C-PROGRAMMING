#include <stdio.h>

int main()
{
 float B1,B2,B3,B4,B5,B6,B7,B8,H1,H2,H3,H4,H5,H6,H7,H8,A1,A2,A3,A4,A5,A6,A7,A8,(AREA);
 
 
 printf("enter the value of base1 and height1: ");
scanf("%f",&B1);
scanf("%f",&H1);
 A1 = (B1*H1)/2 ;
 printf("enter the value of base2 and height2: ");
scanf("%f",&B2);
scanf("%f",&H2);
 A2 = (B2*H2)/2 ;
 printf("enter the value of base3 and height3: ");
scanf("%f",&B3);
scanf("%f",&H3);
 A3 = (B3*H3)/2 ;
 printf("enter the value of base4 and height4: ");
scanf("%f",&B4);
scanf("%f",&H4);
 A4 = (B4*H4)/2 ;
printf("enter the value of base5 and height5: ");
scanf("%f",&B5); 
scanf("%f",&H5);
 A5 = (B5*H5)/2 ;
 printf("enter the value of base6 and height6: ");
scanf("%f",&B6);
scanf("%f",&H6);
 A6 = (B6*H6)/2 ;
 printf("enter the value of base7 and height7: ");
scanf("%f",&B7); 
scanf("%f",&H7);
 A7 = (B7*H7)/2 ;
 printf("enter the value of base8 and height8: ");
scanf("%f",&B8); 
scanf("%f",&H8);
 A8 = (B8*H8)/2 ;
 
 AREA = (A1+A2+A3+A4+A5+A6+A7+A8);
 printf("\nthe value of area is: ");
 printf("%f",AREA);
 return 0;
}
