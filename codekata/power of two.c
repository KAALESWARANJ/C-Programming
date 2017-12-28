#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d",&a);
	if(a!=0 && (a&a-1)==0)
	printf("power of 2",a);
	else
	printf("Not power of 2",a);
	return 0;
}
