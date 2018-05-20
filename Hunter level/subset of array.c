#include<stdio.h>
int main(void)
{
	int n,n1,i,j,a[100],b[100],c[100],k,count=0;
	scanf("%d\n",&n);
	scanf("%d\n",&n1);
	for(i=0;i<n;i++)
	{
	   scanf("%d\t",&a[i]);	
	}
	printf("\n");
	for(j=0;j<n1;j++)
	{
	   scanf("%d\t",&b[j]);	
	}
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
	   {
	   if(b[j]==a[i] && count<n1-1)
	   {
	   	c[k]=a[i];
	   	k++;
	   	count++;
	   
	   }
	}
	}
	printf("%d",count);
	if(count==n1-1)
	{
		printf("yes");
	}
            else
            {
            	printf("no");
            }
	return 0;
	}
	   
		
		
	
	
