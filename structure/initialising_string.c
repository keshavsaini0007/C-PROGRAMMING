# include <stdio.h>
# include <string.h>
int main (){
    struct goo{
    char s1[99],s2[99],s3[99];
    }
    a,b,c;
    
    strcpy(a.s1,"string_1");
    strcpy(a.s2,"string_2");
    strcpy(a.s3,"string_3");

    strcpy(b.s1,"string_11");
    strcpy(b.s2,"string_22");
    strcpy(b.s3,"string_33");

    strcpy(c.s1,"string_111");
    strcpy(c.s2,"string_222");
    strcpy(c.s3,"string_333");
    
    printf("%s\n",a.s1);
    printf("%s\n",a.s2);
    printf("%s\n",a.s3);

    printf("%s\n",b.s1);
    printf("%s\n",b.s2);
    printf("%s\n",b.s3);

    printf("%s\n",c.s1);
    printf("%s\n",c.s2);
    printf("%s\n",c.s3);


    return 0;
}