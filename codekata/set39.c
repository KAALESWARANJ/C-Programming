#include<stdio.h>
int main(void)
{
	int min,hr,m;
	scanf("%d\n",&min);
	hr=min/60;
	m=min-(hr*60);
	printf("%d %d",hr,m);
}
