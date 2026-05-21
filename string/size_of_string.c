# include <stdio.h>
# include <string.h>

int main (){
    char str[999];
    puts("enter your text : ");
    gets(str);
    puts("the size of text is  : ");
    int x=0; 
    while(str[x]!='\0'){  x++; }
    printf("the size of text : \n %d",x);
    return 0;
}