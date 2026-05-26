// # include <stdio.h>
// # include <string.h>

// int main (){
//     char str[99];
//    scanf("%[^\n]s",str);
//    printf("%s",str);
//     return 0;
// }



////////////// or //////////////////



# include <stdio.h>
# include <string.h>

int main (){
    char str[99];
   gets(str);
   puts(str);
    return 0;
}