#include<stdio.h>
int main(void)
{
	  int n,a[100],i,avg=0,sum;
	  scanf("%d\n",&n);
              for(i=0;i<=n;i++)
              {
              	scanf("%d ",&a[i]);
              }
              sum=0;
             for(i=0;i<n;i++)
              {
              	sum=sum+a[i];
              }
              avg=sum/n;
              printf("%d",avg);
              
}
