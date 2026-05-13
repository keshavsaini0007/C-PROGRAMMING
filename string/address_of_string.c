// the address of string is same as the address of first element of string.


# include <stdio.h>
# include <string.h>
int main ()
{
   
   char str[13] = "keshav saini"; 
   int ptr;
   int *ptr = &str;
   printf("%d",ptr);

   printf("%p",str[0]);


    return 0;
}