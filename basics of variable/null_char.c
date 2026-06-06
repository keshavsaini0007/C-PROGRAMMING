// ascii values of the alphabets
# include <stdio.h>
int main (){
    char ch[] = {'a','b','c','\0'};
    int i=0;
    while(ch[i]!='\0'){
      printf("%c ",ch[i]);
        i++;
    }
    return 0;
} 