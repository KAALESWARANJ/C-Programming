#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	scanf("%d\n",&c);
	if(a>b && a>c)
	{
		printf("A is greater");
	}
	else if(b>c)	
	    {
	    	printf("B is greater");
	    }
	else
	{
		printf("C is greater");
	}
	
}
