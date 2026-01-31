#include <stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
            scanf("%d",&n);
    int nst = 1;
       for (int i = 1;i<=n;i++){
         for (int k = 1;k<=n-i;k++){  // spaces dene k liyee....
           printf("  ");
         }
           for (int j = 1;j<=nst;j++){
                printf("* "); 
           }
           printf("\n");
           nst=nst+2;   // dusri loop mai doobaara jaane pe *  2*nst-1 time 
                        // jada print hoga....
       }

    return 0;
}