# include <stdio.h>
# include <string.h>
typedef struct pokemon {               // user defined data type....
    int hp;
    int speed;
    float attack;
    char grade;
    char s[999];
    }pokemon;
int main ()
{
    pokemon pikachu;
    pikachu.hp = 240;
    pikachu.speed = 23;
    pikachu.attack = 50.34;
    pikachu.grade = 'A';
    strcpy(pikachu.s,"pikachu");


    pokemon* x = &pikachu;  

    //  x :-> address for %p....
    //  x :-> 6421288 for %d....
    // *x :-> 200 for %d.... 
    // *x :-> error value for %p.... 
     printf("%p\n",x);


     /////////////////////////////////////////////////
    
    printf("%p\n",&pikachu.hp);

    // NOTE :-> address of pikachu.hp is equal to address of pikachu :-> (x)
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.grade);
    printf("%p\n",pikachu.s);



return 0;}
    