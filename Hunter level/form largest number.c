#include<stdio.h>
int main(void)
{
	int n,a[100],i,j,b,count=0,c;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
			
			   b=a[i];
			   a[i]=a[j];
			   a[j]=b;
				
			}
			if(a[i]=='0')
			{
			    c=a[i];
			    count++;
			}
		
		}
	}
	for(i=0;i<n;i++)
	{           
		if(a[i-1]!=a[i])
		{
		printf("%d",a[i]);
		}
	}
	if(count!=0)
	{
		printf("%d",c);
	}
	return 0;
	
}
