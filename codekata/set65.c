#include<stdio.h>
int main(void)
{
	int m,n,l;
	scanf("%d %d",&m,&n);
	l=m*n;
	if(l%2==0 && l!=0)
	{
		printf("Even");
	}
	else if(l%2!=0 && l!=0)
	{
		printf("Odd");
	}
	else
	{
		printf("Result is zero");
	}
}
