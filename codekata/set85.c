#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	gets(a);
	int n=strlen(a);
	int i;
	int l=0;
	int h=n-1;
	if(n%2!=0)
	{
	 for(i=l;i<=h;l++,h--)
	 {
	    if(l==h)
	    {
	    	a[l]='*';
	    }
	    printf("%c",a[l]);
	 }
	  
	}
	else
	{
	  for(i=l;i<=h;l++,h--)
	 {
	    if((l-h)==-1)
	    {
	    	a[l]='*';
	    	a[h]=a[l];
	    }
	    printf("%c",a[l]);
	  }
	  	
	}
	return 0;
}
	
