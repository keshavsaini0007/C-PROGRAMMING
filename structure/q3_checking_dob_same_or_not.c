# include <stdio.h>
# include <string.h>
# include <stdbool.h>
int main (){
    
    typedef struct dob{
        int day;
        int month;
        int year;
    } dob;

    dob a,b;
     
    a.day = 12;
    a.month = 8;
    a.year = 2004;

    b.day = 12;
    b.month = 8;
    b.year = 2003;

    bool ind = false ;
    if (a.day==b.day){
        if (a.month==b.month){
            if (a.year==b.year){
                ind = true;
            }
        }
    };

    if (ind==true) printf("the dob is same"); 
    if (ind==false) printf("the dob is different..");

    return 0;
}