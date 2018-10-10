#include <stdio.h>

int factorial(int n);
int main()
{
	int num,f;
	printf("Enter num\n");
	scanf("%d",&num);
	f=factorial(num);
	printf("Factorial of %d = %d",num,f);
	return 0;
}	

int factorial(int n)
{
	if(n==1)
	return 1;
	else
	return (factorial(n-1)*n);
}
