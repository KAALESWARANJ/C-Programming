#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	gets(a);
	int i,count=0;
	while(a[i]!='\0')
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'
		||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
		
			count++;
		}
	    i++;
	}
	if(count!=0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
