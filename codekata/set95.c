#include<stdio.h>
int main(void)
{
	char a[100],e[100],o[100];
	gets(a);
	int i,j,k;
	i=j=k=0;
	while(a[i]!='\0')
	{
		if(i%2==0)
		e[j++]=a[i];
		else
		o[k++]=a[i];
	  i++;
	}
	e[j]=o[k]='\0';
	printf("%s %s",e,o);
}
