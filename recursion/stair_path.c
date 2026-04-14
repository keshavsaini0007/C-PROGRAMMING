# include <stdio.h>
int stairs(int n){
  if (n==1 || n==2){return n;}
  if (n==3){return 4;}  // exceptional case on solving.....
  int way = stairs(n-1) + stairs(n-2) + stairs(n-3) ;
  // 'n-1'   ek step gap allowed hone k liye 
  // 'n-2'   do step gap allowed hone k liye 
  // 'n-3' teen step gap allowed hone k liye 3
  
  return way;
}
int main ()
{
  int n;
  printf("enter the last step no. : ");
  scanf("%d",&n);
  int x = stairs(n);
  printf("the number of ways are : %d ",x);
  return 0;
}