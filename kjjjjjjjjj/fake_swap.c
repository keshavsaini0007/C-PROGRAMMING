# include <stdio.h>
void swap (int x , int y ){  // fake swaping 
    int temp  = x;
    x =  y;
    y = temp;
}
int main (){
    int a = 7;
    int b = 3;
    swap(a,b);
    printf("%d %d",a,b);

    return 0;
}