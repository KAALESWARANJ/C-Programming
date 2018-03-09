#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d  %d\n",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%d  %d",a,b);
}
