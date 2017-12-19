#include <stdio.h>

int main(void) 
{
	int a,b,c,d,e;
	printf("Enter a\n");
	scanf("%d",&a);
	b=(a*10)+a;
	c=(b*10)+a;
	d=(c*10)+a;
	e=a+b+c+d;
	printf("%d",e);
	return 0;
}
