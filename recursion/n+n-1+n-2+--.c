# include <stdio.h>
int ret(int n){
  if (n==0) return 0;
  int x = n + ret(n-1);
  return x;
}
int main()
{
  int n;
  printf("enter a number : ");
  scanf("%d",&n);
  
  int sum = ret(n);
  printf("the sum is %d",sum);
  
  return 0;
}