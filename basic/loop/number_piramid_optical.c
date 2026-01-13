# include <stdio.h>
int main ()
{
  int n; 
    printf("enter the number : ");
    scanf("%d",&n);
    

      for(int i = 1; i<=n; i++){    // line space k liye...
      
         for(int s = 1; s<=n-i; s++){  // space dene k liye har line main...
           printf("  ");
         }
            for (int j = 1; j<=i; j++ ){
              printf("%d ",j);
              }
                int a = i-1;
                  for(int k = 1; k<=i;k++){
                   if(a!=0) {printf("%d ",a);}
                    a--;
                  }
                  
                
               printf("\n");
      }
  return 0;
}