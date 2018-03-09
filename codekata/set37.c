#include<stdio.h>
#include<string.h>
int main(void)
{
char a[100];
int n,i,count=0,count1=0;
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
	if(a[i]>=48 && a[i]<=57)
	{
		count++;
	}
	else
	{
		count1++;
	}
}
	if(count==n)
	{
		printf("Numeric");
	}
	else
	{
		printf("String");
	}

}
