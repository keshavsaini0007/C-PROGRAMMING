# include <stdio.h> 
void caseee (int n){
  if (n==0){return ;}
  printf("%d\n",n);
  caseee(n-1);
  return ;
}
void casee(int n){
  if (n==0) {return ;}
  casee(n-1);
  printf("%d\n",n);
  return ;
}
int main ()
{
    int n ;
    printf("enter the number : ");
    scanf("%d",&n);
    
      casee (n);
      caseee (n);
  return 0 ;
}