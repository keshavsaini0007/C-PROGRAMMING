// NOTE 1 : pointer ki help se total string change ho sakti hai....

// NOTE 2 : but individual character nahi....

# include <stdio.h>
# include <string.h>
int main ()
{
    // char str[9999] = "college students";
     char str[9999];
     puts("enter your string : ");

     gets(str);

    puts("wants to replace by : ");

    char *ptr = str;
    // ptr = "physics wallah ";
    gets(ptr);
    // ptr = "school students";

    puts(ptr);
    return 0;
}


























