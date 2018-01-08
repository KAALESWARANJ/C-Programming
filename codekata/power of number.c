#include <stdio.h>
 
int main(void) 
{
	int e,r=1,b;
	scanf("%d\n",&b);
	scanf("%d\n",&e);
	while(e!=0)
	{
		r=r*b;
		e--;
	}
	printf("%d\n",r);
 
	return 0;
}
