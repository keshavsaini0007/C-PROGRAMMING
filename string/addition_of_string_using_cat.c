# include<stdio.h>
# include<string.h>
int main(){
    char s1[9999] = "keshav ";   // needed size = size of s1 + size of s2
    char s2[9999] = "saini";
    strcat(s1,s2);
    printf("%s",s1);
    return 0;
}