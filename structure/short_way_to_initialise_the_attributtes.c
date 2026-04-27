# include <stdio.h>
# include <string.h>
int main ()
{
    struct pokemon {               // user defined data type....
    char s[999];
    int hp;
    int speed;
    float attack;
    char grade;
    
    };

    struct pokemon pikachu = {"pickachu",50,100,60.6,'A'} ;
    

    struct pokemon charezard = {"charezard",60,200,70.7,'B'};
    

    struct pokemon mewtow = {"mewtow",90,250,90.9,'c'};
     
    
    printf("the name of pokemon is : %s\n",pikachu.s);
    printf("the hp of pikachu is : %d\n",pikachu.hp);
    printf("the speed of pikachu is : %d\n",pikachu.speed);
    printf("the attack of pikachu is : %f\n",pikachu.attack);
    printf("the grade of pikachu is : %c\n\n",pikachu.grade);
    

    
    printf("the name of pokemon is : %s\n",charezard.s);
    printf("the hp of charezard is : %d\n",charezard.hp);
    printf("the speed of charezard is : %d\n",charezard.speed);
    printf("the attack of charezard is : %f\n",charezard.attack);
    printf("the grade of charezard is : %c\n",charezard.grade);
    printf("the grade of pikachu is : %s\n\n",pikachu.s);

    printf("the name of pokemon is : %s\n",mewtow.s);
    printf("the hp of mewtow is : %d\n",mewtow.hp);
    printf("the speed of mewtow is : %d\n",mewtow.speed);
    printf("the attack of mewtow is : %f\n",mewtow.attack);
    printf("the grade of mewtow is : %c\n\n",mewtow.grade);
    return 0;
}