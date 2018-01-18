#include <stdio.h>
int main(void)
{
	int a[100],i,j,n,count=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-1;j++)
		{
			if(a[i]==a[j+1])
			{
				count++;
				if(count==1)
				{
					printf("%d",a[i]);
				}
				break;
			}
		}
	}
		if(count==0)
		printf("Unique");
	return 0;
}
