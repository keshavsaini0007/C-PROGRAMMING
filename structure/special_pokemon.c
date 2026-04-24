# include <stdio.h>
# include <string.h>
int main (){

   struct pokemon {
       int age;
       int speed;          }b;


  printf("enter the age of mewtow : ");
  scanf("%d",&b.age);
  printf("enter the speed of mewtow : ");
  scanf("%d",&b.speed);

   struct mewtow {
     struct pokemon x; 
     int attack;            }a;
   printf("enter the value of attack of mewtow : ");
   scanf("%d",&a.attack);
   
   printf("the age of mewtow :  %d\n",b.age);
   printf("the speed of mewtow :  %d\n",b.speed);
   printf("the attack of mewtow :  %d\n",a.attack);
   


   

    return 0;
}