
#include <stdio.h>
int main()
{
    int keshav;
    printf("enter the number : ");
            scanf("%d",&keshav);

        for (int k = 1; k<=keshav; k++){
            for (int e = 1; e<=keshav; e++){
                if ((k+e)<=keshav){
                    printf("  ");
                }
                
                else {
                    printf("* ");
            }
              
            e = e+((e)/2);
            }
            
                 printf("\n");
                 

        }

    return 0;
}