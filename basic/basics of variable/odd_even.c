#include <stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    if(n==0){
        printf("the number is odd and even both");
    }
else if(n%2==0){
    printf("the number is even");
}

else if (n%2!=0){
printf("the number is odd");
}
    return 0;
}
