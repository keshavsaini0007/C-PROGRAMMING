#include <stdio.h>
int factorial(int x){
  if(x == 1 ||  x == 0) { return 1; }  // 0! or 1! se neeche hi nahi jaiga......{like-> -1!}
  return x*factorial(x-1);// recursion..{same function ko again call karna!}
}
int main()
{
  int x;
  printf("enter the number : ");
  scanf("%d",&x);
  int fact = factorial(x);
  printf("the factorial value of %d is %d",x,fact);
  return 0;
}