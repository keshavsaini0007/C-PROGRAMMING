# include<stdio.h>
# include<string.h>
int main ()
{
    char s1[6]="kesav";
    for(int i = 4; i>=3; i--){      s1[i+1]=s1[i];     }
    s1[3]='h';
    printf("%s",s1);

    return 0;
}