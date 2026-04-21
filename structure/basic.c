# include <stdio.h>
# include <string.h>
int main ()
{
    struct pokemon {               // user defined data type....
    int hp;
    int speed;
    float attack;
    char grade;
    char s[999];
    };

    struct pokemon pikachu ;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.attack = 60.6;
    pikachu.grade = 'A';
    strcpy(pikachu.s,"keshav");

    struct pokemon charezard;
    charezard.hp = 60;
    charezard.speed = 200;
    charezard.attack = 70.7;
    charezard.grade = 'B';
    

    struct pokemon mewtow ;
     mewtow.hp = 90;
     mewtow.speed = 250;
     mewtow.attack = 90.9;
     mewtow.grade = 'C';
    
    
    printf("the hp of pikachu is : %d\n",pikachu.hp);
    printf("the speed of pikachu is : %d\n",pikachu.speed);
    printf("the attack of pikachu is : %f\n",pikachu.attack);
    printf("the grade of pikachu is : %c\n",pikachu.grade);
    printf("the grade of pikachu is : %s\n",pikachu.s);

    

    printf("the hp of charezard is : %d\n",charezard.hp);
    printf("the speed of charezard is : %d\n",charezard.speed);
    printf("the attack of charezard is : %f\n",charezard.attack);
    printf("the grade of charezard is : %c\n",charezard.grade);
    

    printf("the hp of mewtow is : %d\n",mewtow.hp);
    printf("the speed of mewtow is : %d\n",mewtow.speed);
    printf("the attack of mewtow is : %f\n",mewtow.attack);
    printf("the grade of mewtow is : %c\n",mewtow.grade);
    return 0;
}