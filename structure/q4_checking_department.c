# include <stdio.h>
# include <string.h>
# include <stdbool.h>
typedef struct dep{
        char name[99];
        char branch[99];
    } dep;
   
   void check(char a1[44],char a2[44]){
    int     size = 5;                                // declere plz...
    size = size-1;
        for(int i = 0; i<=size; i++){
            if(a1[i]==a2[i]){
                i++; }
            else {printf("both are not in same department.") ;
            break;}
            if (i==size+1){ printf("both are in same department.");}
        };
   return;
   }

int main (){
    dep a,b;
    strcpy(a.name,"radha");
    strcpy(a.branch,"btch");
     
    strcpy(b.name,"krishna");
    strcpy(b.branch,"btech");
      
    
        check(a.branch,b.branch);
    
    return 0;
}