#include <stdio.h>

int main()
{
    int a = 9;
    int* x = &a;
    *x = 4;      // a change ho gaya...... 
    printf("%d",a);
    return 0;
}