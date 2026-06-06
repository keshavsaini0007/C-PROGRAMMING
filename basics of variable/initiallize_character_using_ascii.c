# include <stdio.h>
int main ()
{
    char str[] = "aeshav saini";
     str[0]=107;
    int i = 0;
    
    while (str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}