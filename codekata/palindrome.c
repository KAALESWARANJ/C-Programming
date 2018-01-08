#include<stdio.h>
int main(void)
{
	int n,rev=0;
	scanf("%d\n",&n);
	 int temp=n;
	while(temp!=0)
	{
		rev=rev*10;
		rev=rev+temp%10;
		temp=temp/10;
		
	}
	printf("%d",rev);
	
}
