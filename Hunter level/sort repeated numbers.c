#include <stdio.h>

int main(void) 
{
	int n,i,j,k=0,count=0,l=0,a[100],b[100],res;
	scanf("%d\n",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
	   for(j=i+1;j<=n;j++)
	   {
	   	if(a[i]==a[j])
	   	{
	   	   if(b[k-1]!=a[i])
	   	   {
	   		b[k]=a[i];
	   		count++;
	   		k++;
	   	   }
	   	}
	   }
	}
	for(k=0;k<count;++k)
	{
	   for(l=k+1;l<count;l++)
	   {
	          if(b[k]>b[l])
	          {
	          	res=b[k];
	          	b[k]=b[l];
	          	b[l]=res;
	   }
	}
	}
	for(k=0;k<count;k++)
	{
		printf("%d\t",b[k]);
	}
	return 0;
}
