#include<stdio.h>
int main(void)
{
	int a[10],i,j,k,n;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(j=0;j<n;j++)
	{
              for(k=j+1;k<n;k++)
              {
              	printf("(%d,%d)\t",a[j],a[k]);
              }
	}
	return 0;
}
	  
	
	
