#include<stdio.h>
#include<string.h>
int main(void)
{
char a[100],rev[100];
int count,i,n;
gets(a);
n=strlen(a);
for(i=n-1;i>=0;i--)
{
	rev[n-i-1]=a[i];
}
for(count=1,i=0;i<n;i++)
{
	if(rev[i]!=a[i])
	{
	   count=0;
	   printf("not palindrome");
	   break;
	}
}
if(count==1)
{
	printf("palindrome");
}
return 0;
}
