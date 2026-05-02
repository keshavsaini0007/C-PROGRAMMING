// NOTE:->      (*x) = x-> 

# include <stdio.h>
# include <string.h>
typedef struct pokemon {               // user defined data type....
    int hp;
    int speed;
    }pokemon;

       void change(pokemon* p){      // as like                 int* x 
         
           p->hp = 250;                   // changed...
           p->speed = 260;
           return;
       }
  
int main ()
{
    pokemon pikachu;
    pikachu.hp = 240;
    pikachu.speed = 250;
    

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
          change(&pikachu);               // as like            = &y;
    
    // NOTE :-> address of pikachu.hp is equal to address of pikachu :-> (x)
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);


return 0;}
    