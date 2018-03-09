#include<stdio.h>
int main(void)
{
	int a,digit,sum=0;
	scanf("%d\n",&a);
	while(a!=0)
	{
	  digit=a%10;
	  a=a/10;
	  sum=sum+digit;
	}
	printf("%d",sum);
}
