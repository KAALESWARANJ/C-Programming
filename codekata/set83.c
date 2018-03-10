#include<stdio.h>
int main(void)
{
	int n,l,r,count=0;
	scanf("%d %d\n",&l,&r);
	scanf("%d\n",&n);
	while(l!=r)
	{
		if(n>l && n<r)
		{
			count++;
			
		}
		l++;
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
