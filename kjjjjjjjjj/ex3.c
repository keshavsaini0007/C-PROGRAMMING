# include <stdio.h>


// in current compiler it will give error ..


// int fun ( int x ,int y );  // function declaretion 
int main (){
    int a;
    a = fun(2,4);   // calling function
    
    printf("%d ",a);
return 0;
}
int fun ( int x ,int y ){      // function defination 
int p = y+x;
return p;    
}
