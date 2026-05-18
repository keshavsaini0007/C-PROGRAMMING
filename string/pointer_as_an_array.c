# include <stdio.h>
# include <string.h>
int main () {
    char str[99999];
    puts("enter your string : ");
    gets(str);
    char *ptr = str; // ptr now points to str[0]...
    // *ptr means ptr is an string of address str[0]->str

    // while(*ptr!='\0'){  printf("%c",*ptr);
    // ptr++; }
    
   // *ptr is add. of str[0]  -> str 
    puts(ptr);  
    
    return 0 ;
}
