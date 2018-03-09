#include <stdio.h>

int main(void)
{
	char a[10];
	gets(a);
	int i,n;
	n=strlen(a);
           int count=0;
           int count1=0;
	for(i=0;i<n;i++)
	{
	if(a[i]>='0' && a[i]<='9')
	{
	count++;	
	}
	else
	{
	count1++;	
	}
	}
	if(count!=0)
	{
		printf("yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
