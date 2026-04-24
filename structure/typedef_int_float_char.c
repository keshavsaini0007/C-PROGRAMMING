# include <stdio.h>
# include <string.h>

typedef int I;
typedef float F;
typedef char C;
int main ()
{
  struct koooo  {
  I  x;
  F y;
  C str[99];
  }a;

   // NOTE : string koo pehele input lena padega...others se.

  puts("write your string : ");
  scanf("%[^\n]s",a.str);
  // gets(a.str);

  puts("enter the value of interger x : ");
  scanf("%d",&a.x);
  puts("enter the value of float y : ");
  scanf("%f",&a.y);

  printf("%s\n",a.str);
  printf("%d\n",a.x);
  printf("%f\n",a.y);
  

  

  return 0;
}