#include <stdio.h>
int main()
{
	int n ;
	printf("enter the number : ");
	scanf("%d",&n);
	int nst = n;
	int nsp = 1;
	for(int i = 1; i<=2*n-1; i++){
	  char ch = 64+i;
	  printf("%c ",ch);
	}
	printf("\n");

	for(int i = 1; i<=n-1; i++) {
		int a = 1;                            // VIP STEP...
		for(int j = 1; j<=nst-1; j++) {       // here nst = n;
			char ch = 64+a;
			printf("%c ",ch);
			a++;
		}
		for(int j = 1; j<=nsp; j++) {         // here nsp = 1;
			printf("  ");

			a++;
		}
		for(int j = 1; j<=nst-1; j++) {        // here nst = n;
			char ch = 64+a;
			printf("%c ",ch);
			a++;

		}
		nst--;
		nsp+=2;
		printf("\n");
	}
	return 0;
}