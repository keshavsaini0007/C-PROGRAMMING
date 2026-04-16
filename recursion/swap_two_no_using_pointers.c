# include <stdio.h>
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
	return ;
}

int main ()
{
	int a;
	printf("enter the value of first integer : ");
	scanf("%d",&a);
	int b;
	printf("enter the value of second integer : ");
	scanf("%d",&b);

	swap(&a,&b);
	printf("The value of first integer : %d\n",a);
	printf("The value of second integer : %d\n",b);

	return 0;
}