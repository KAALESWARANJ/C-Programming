#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("Enter the numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
	printf("a is greater");
	}
	else if(b>c)
	{
	printf("b is greater");
	}
	else
	{
	printf("c is greater");
	}
	return 0;
	
}

