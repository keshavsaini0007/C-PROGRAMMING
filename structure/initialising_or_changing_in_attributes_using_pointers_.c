// NOTE:->      (*x) = x-> 

# include <stdio.h>
# include <string.h>
typedef struct pokemon {               // user defined data type....
    int hp;
    int speed;
    }pokemon;
int main ()
{
    pokemon pikachu;
    pikachu.hp = 240;
    pikachu.speed = 250;
    

    printf("%d\n",pikachu.hp);

    pokemon* x = &pikachu;  
    x->hp = 250;      // changed...
    
    // NOTE :-> address of pikachu.hp is equal to address of pikachu :-> (x)
    printf("%d\n",pikachu.hp);
   


return 0;}
    