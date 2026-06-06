# include<stdio.h>
# include<string.h>
int main(){
    char s1[22] = "Keshav saini";
    char s2[21];
    strcpy(s2,s1);
    printf("%s\n",s2);
    s2[0] = 'R';
    printf("%s\n",s2);
    printf("%s\n",s1);

    return 0;
}