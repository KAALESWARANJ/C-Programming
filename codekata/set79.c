#include<stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	if((a-b)==0 || (a-b)%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	
}
