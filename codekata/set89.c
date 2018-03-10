#include<stdio.h>
int main(void)
{
	int a,b,d,count=0,i;
	scanf("%d %d",&a,&b);
            int c=a*b;
            for(i=1;i<=c;i++)
            {
            	if(c%i==0)
            	{
            	  d=c/i;
            	  if(d==a && d==b)
            	  {
            	  	count++;
            	  }
            	}
            }
            if(count!=0)
            {
            	printf("yes");
            }
            else
            {
            	printf("no");
            }
}
