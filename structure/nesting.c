# include <stdio.h>
# include <string.h>
# include <stdbool.h>

int main(){

    typedef struct keshav {
        int age ;
        float weight;
        float height; 
        } keshav;
    
    typedef struct tarun{
      keshav kes;
      int speed; 
      }tarun;
      

    typedef struct shivam{
        tarun tar;
        int class; 
        } shivam ;

    shivam shi;
     shi.class = 12;
     shi.tar.speed = 23;
     shi.tar.kes.age = 17;
     shi.tar.kes.weight = 52;
     shi.tar.kes.height = 5.5;

    
    printf("the age of keshav saini is %d year \n",shi.tar.kes.age);
    printf("the height of keshav saini is %f feet\n",shi.tar.kes.height);
    printf("the weight of keshav saini is %f kg\n",shi.tar.kes.weight);

    printf("the age of tarun saini is %d year \n",shi.tar.kes.age);
    printf("the height of tarun saini is feet %f \n",shi.tar.kes.height);
    printf("the weight of tarun saini is %f kg\n",shi.tar.kes.weight);


    printf("the speed of tarun saini is %d km/h\n",shi.tar.speed); // special att...
    
    printf("the age of shivam saini is %d year \n",shi.tar.kes.age);
    printf("the height of shivam saini is %f feet\n",shi.tar.kes.height);
    printf("the weight of shivam saini is %f kg\n",shi.tar.kes.weight);


    printf("the speed of shivam saini is %d km/h\n",shi.tar.speed);
    printf("the class of shivam is %dth \n",shi.class);

    
    
    return 0;
}