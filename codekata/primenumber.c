#include<stdio.h>
int main(void)
{
	int n,count,i=1,j;
	scanf("%d\n",&n);
	while(i<n)
	{           count=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
			if(count==0 && i!=1)
			{
			printf("%d",i);
			}
		
		i++;
	}
	return 0;
}
