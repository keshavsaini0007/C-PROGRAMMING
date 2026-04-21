# include <stdio.h>
# include <string.h>
typedef struct pokemon {               // user defined data type...."GLOBALLY"
    int hp;
    int speed;
    float attack;
    char grade;
    char s[999];
    } pokemon ;
         void change(pokemon A){
// A name ka ek structure ban gaya jisme pikachu ka "att. data" copy hua..

             A.hp = 60;
             A.speed = 200;
             A.attack = 70.6;
             A.grade = 'B';
             strcpy(A.s,"saini");
// jo data A main copy hua tha vo change kar diya ....
// NOTE :- but NO change in data of pikachu.... 
         }

int main ()
{
    
    pokemon pikachu ;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.attack = 60.6;
    pikachu.grade = 'A';
    strcpy(pikachu.s,"keshav");

        change(pikachu);
    // attributes will not change due to change function..
    // which means struct.. are passed byb value....
    
    printf("the hp of pikachu is : %d\n",pikachu.hp);
    printf("the speed of pikachu is : %d\n",pikachu.speed);
    printf("the attack of pikachu is : %f\n",pikachu.attack);
    printf("the grade of pikachu is : %c\n",pikachu.grade);
    printf("the grade of pikachu is : %s\n",pikachu.s);
    return 0;
}