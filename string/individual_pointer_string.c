# include <stdio.h>
# include <string.h>
int main ()
{
    char *s1 = "pollow";
    char *s2 = "hollow";
    s2 = s1;
    puts(s2);
    return 0;
}