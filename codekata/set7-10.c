#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d\n",&a);
	a=a+1;
	while(a)
	{
	if(a!=0 && (a&a-1)==0)
	{
		break;
	}
	a++;
	}
	printf("%d",a);
	return 0;
}
