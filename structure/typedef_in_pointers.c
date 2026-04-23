# include <stdio.h>
typedef int* ptr;


int main(){
int p = 12,d = 32;
   ptr x = &p,y = &d;
   printf("%p\n",x);
   printf("%p\n",y);
   
  return 0;
}