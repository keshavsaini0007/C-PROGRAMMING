# include <stdio.h>
# include <string.h>

int main (){

    struct cand{
    char name[999];
    int age ;
    float salery;
    }  cd1 , cd2 ;

    
    char cd11[990];
    printf("enter the name of 1st candidate : ");
    scanf("%s\n",cd11);
    strcpy(cd1.name,cd11);
    printf("enter the age of 1st candidate : ");
    scanf("%d\n",&cd1.age);
    printf("enter the salery of 2nd candidate : ");
    scanf("%f\n",&cd1.salery);

    char cd22[990];
    printf("enter the age of 2nd candidate : ");
    scanf("%s\n",cd22);
    strcpy(cd1.name,cd22);
    printf("enter the age of 1st candidate : ");
    scanf("%d\n",&cd2.age);
    printf("enter the salery of 2nd candidate : ");
    scanf("%f\n",&cd2.salery);


    printf("\nthe name of 1st candidate is %s\n",cd1.name);
    printf("\nthe age of 1st candidate is %d\n",cd1.age);
    printf("\nthe salery of 1st candidate is %f\n",cd1.salery);

    
    printf("\nthe name of 2nd candidate is %s\n",cd2.name);
    printf("\nthe age of 2nd candidate is %d\n",cd2.age);
    printf("\nthe salery of 2nd candidate is %f\n",cd2.salery);



    return 0;
}


// sequence scanning error
