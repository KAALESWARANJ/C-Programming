#include<stdio.h>
int main(void)
{
	  int n,a[100],i,min,max;
	  scanf("%d\n",&n);
              for(i=0;i<=n;i++)
              {
              	scanf("%d ",&a[i]);
              }
             min=a[0];
             max=a[0];
             for(i=0;i<=n;i++)
              {
              	if(a[i]>max)
              	{
              		max=a[i];
              	}
              	if(a[i]<min)
              	{
                                   min=a[i];
              	}
              }
              printf("%d %d",min,max);
             
}
