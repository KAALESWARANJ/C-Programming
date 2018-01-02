#include <stdio.h>

int main(void)
{
	int n,fact;
	printf("enter n");
	scanf("%d",&n);
  fact=factorial(n);
	printf("%d",fact);
	return 0;
}
int factorial(int n)
{          
	int fact;
	if(n==1)
	{
		return 1;
	}
	else
	{
		fact=n*factorial(n-1);
		return fact;
	}
}
