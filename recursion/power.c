# include <stdio.h>
int p(int a,int b){
    if(b==0) return 1;
    if(b%2==0) return p(a,b/2)*p(a,b/2);
    if(b%2!=0) return p(a,b/2)*p(a,b/2)*a;
}
int main ()
{
    int a,b;
    printf("enter the base value  : ");
    scanf("%d",&a);
    printf("enter the power value : ");
    scanf("%d",&b);
    
    printf("the result is : %d",p(a,b));
    return 0;
}