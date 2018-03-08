#include<stdio.h>
int main(void)
{
    int a[100],i,n,j,c;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d\t",&a[i]);
    }
   for(i=0;i<n;i++)
   {
   	for(j=i+1;j<n;j++)
   	{
   		if(a[i]>a[j])
   		{
   			c=a[i];
   			a[i]=a[j];
   			a[j]=c;
   		}
   	}
   }
   for(i=0;i<n;i++)
   {
   printf("%d\t",a[i]);
   
   }
    n = (n+1) / 2 - 1;  

   printf("Median = %d ", a[n]);
   return 0;
}
