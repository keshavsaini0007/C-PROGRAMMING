# include <stdio.h>
int main (){
    {int  x = 1;  //block  
    }             //
    printf("%d",x); // no scope 
    return 0;
}