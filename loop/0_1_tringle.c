# include <stdio.h>
int main ()
{
 int n;
 printf("enter the number : ");
 scanf("%d",&n);
 
 for(int i = 1; i<=n; i++){
  for (int j = 1; j<=i; j++){
   int x=0;
   int y=1;
   if((i+j)%2==0){
    printf("%d",x);
   }
   else printf("%d",y); 
  }
  printf("\n");
 }
 return 0;
}