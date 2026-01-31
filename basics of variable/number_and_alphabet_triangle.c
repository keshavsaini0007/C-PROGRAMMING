# include <stdio.h>
int main ()
{ 
    int n;
    printf("enter the number of rows or column : ");
    scanf("%d",&n);
    
    
       for(int i=1;i<=n;i++){
               int a = 1;

           for(int j=1;j<=i;j++){
               int  d = a + 64;
             if(i%2!=0){  printf("%d ",a);
             }

               char ch = (char)d ;
              if(i%2==0){ 
                  printf("%c ",ch);
              }
               a=a+1;
                 
           }
           printf("\n");

       }
    return 0;
}