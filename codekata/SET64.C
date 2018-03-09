#include<stdio.h>
int main(void)
{
	int a,b;
	scanf("%d\n",&a);
	if(a%2==0)
	{
	  printf("%d",a);	
	}
	else
	{
	  b=a-1;
	  if(b!=0 && b%2==0)
	  {
	  	printf("%d",b);
	  }
	  else
	  {
	  	printf("ZERO");
	  }

	}
}
