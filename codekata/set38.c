#include <stdio.h>

int main(void)
{
	int n,a[100],i;
	scanf("%d\n",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d\t",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		printf("%d  %d\n",a[i],i);
	}
	return 0;
}
