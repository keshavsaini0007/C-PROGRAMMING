# include <stdio.h>
# include <string.h>
int main ()
{
    struct pokemon{
     int a;
     int b;
     char k[999];
    }x;


    scanf("%d",&x.a);
    scanf("%d",&x.b);
    scanf("%s",&x.k);

    // printf("%d\n",x.a);            // 
    // printf("%d\n",x.b);            // iss se duusre structure mai run 
    // puts(x.k);                     // nahi kar payga code... 
                                      // yahi per break ho jaygaa..

    struct dokemon{
     int c;
     int d;
     char e[999];
    }y;
    
    scanf("%d",&y.c);
    scanf("%d",&y.d);
    scanf("%s",&y.e);

////////////////////////////////////////////////////////////////////////////

    printf("%d\n",x.a);
    printf("%d\n",x.b);
    puts(x.k);

    printf("%d\n",y.c);
    printf("%d\n",y.d);
    puts(y.e);
    
    


    return 0;
}






































// // struct men{
//     // char name[999];
//     // int age ;
//     // int salery ;
//     // };

//     struct person1 {
//     char name[999];
//     int age ;
//     int salery ; }a;

//      puts("enter the name of first person : ");
//     gets(a.name);
//     printf("\n");
//     printf("enter the age of first person : ");
//     scanf("%d",&a.age);
//     printf("enter the salery of first person : ");
//     scanf("%d",&a.salery);

    
//     struct person2 {
//     char name[999];
//     int age ;
//     int salery ;}b;
    
   
//     printf("enter the name of second person : ");
//     scanf("%[^\n]s",b.name);
//     printf("\n");
//     printf("enter the age of second person : ");
//     scanf("%d",&b.age);
//     printf("enter the salery of second person : ");
//     scanf("%d",&b.salery);

         
        

//          puts("the name of second person : ");     
//           puts(b.name);
//          printf("the age of second person : ");
//           printf("%d\n",b.age);
//          printf("the salery of second person : ");
//           printf("%d\n",b.salery);
