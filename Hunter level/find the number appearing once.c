#include <stdio.h>

int main(void) 
{
	int n,a[100],i,j,b;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>=a[j])
			{
			  b=a[i];
			  a[i]=a[j];
			  a[j]=b;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	     if(a[i]!=a[i+1] || a[i+1]==a[n-1])
	     {
	     	printf("%d",a[i]);
	     	break;
	     }
	     if(a[i]==a[i+1])
	     {
	     	i++;
	     }
	}

	
	
	return 0;
}
