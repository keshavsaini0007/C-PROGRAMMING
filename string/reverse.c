# include <stdio.h>
# include <string.h>
int main ()
{
    


    char str[99999];
    
    puts("write your string : ");
    scanf("%[^\n]s",str);
    // gets(str);
    puts("the reverse of string : ");

    int x = 0;
    int trp=0;
    while (str[x]!='\0'){
        x++;
        trp++;
    }
    
    for(int i = 0,j=trp-1; i<=j; i++,j--){
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
   
    
   puts(str);



    return 0;
}