#include<stdio.h>
int main(void)
{
    int a[100],i,n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d\t",&a[i]);
    }
   int max=a[0];
     for(i=0;i<n;i++)
     {
     	if(a[i]>max)
     	{
              max=a[i];
     	}
     }
   printf("%d",max);
}
