# include <stdio.h>
int fun (int x ,int y){   // imaginarry x and y 
    x = 2*x+y;
    return x;
}
int main (){
int x = 12, y = 23;
y = fun(y,x);

x = fun(y,x);
printf("%d ",x);

    return 0 ;
}