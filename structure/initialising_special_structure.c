# include <stdio.h>
# include <string.h>
int main ()
{
 struct pokemon {        // user defined data type....
    int hp;
    int speed;
    float attack;
    char grade; };
  
  struct keshav   {
  int special;
  struct pokemon x;
  }a; 

  
  printf("enter the value of the a.special : ");
  scanf("%d",&a.special);
  printf("%d",a.special);

    return 0;
}