# include <stdio.h>
void rrr(int n){
  if (n >=1) {
   printf("%d\n",n);
   n--;
   rrr(n);
    
  }
  
   
   return ;
}
int main()
{
    int  n;
    printf("enter the number : ");
    scanf("%d",&n);
    rrr(n);
    
    return 0;
}