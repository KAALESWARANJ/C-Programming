#include <stdio.h>

int main(void)
{
	int a[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			printf("%d\n",a[i]);
		}
	}
	return 0;
}
