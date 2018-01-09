#include<stdio.h>
int main(void)
{
	int l=5,h=10,i;
	while(l<h)
	{
		if(l%2!=0)
		printf("%d ",l);
		++l;
	}
	return 0;
}
