#include<stdio.h>
#include<string.h>
int main(void)
{ 
	int a,i;
	char b[100];
	int count[26];
	gets(b);
	a=strlen(b);
	for(i=0;i<26;i++)
	{
	count[i]=0;
	}
	for(i=0;i<a;i++)
	{
	if(b[i]>=97&&b[i]<=122)
	count[b[i]-97]++;
	else
	count[b[i]-65]++;
	}
	for(i=0;i<26;i++)
	{
	if(count[i]!=0)
	printf("%c-%d\n",(i+97),count[i]);
	}
	return 0;
}
	
	

