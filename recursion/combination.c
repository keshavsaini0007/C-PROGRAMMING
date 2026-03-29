#include <stdio.h>
int factorial(int x) {                      // [    3    ]
	int fact=1;
	for (int i = 1 ; i<=x; i++) { 
		fact = fact*i;
	}
	return fact;                        // factorial(__)  returned... 
}




                                        
int combination(int n,int r) {              // [    2    ]
                                       //   ~ function 2 
	int ncr  = factorial(n)/(factorial(r)*factorial(n-r)); 

	return ncr;                            // ncr  returned... 
}




int main()                                        
{                                             //    [   1   ]
	int n,r;                                  
	printf("enter the value of n : ");         
	scanf("%d",&n);
	printf("enter the value of n : ");
	scanf("%d",&r);

	int ncr = combination(n,r);      //   ~ function 1 
	printf("the value of of combination is : %d",ncr);
	return 0;
}