#include<stdio.h>
int main(void)
{
	int a[10],n,i,j,max;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	max=a[0];
	for(j=1;j<n;j++)
	{
		if(max<a[j])
		{
			max=a[j];
		}
		else
		{
		  break;	
		}
		
	
	}
	printf("%d",max);
	
	
}
