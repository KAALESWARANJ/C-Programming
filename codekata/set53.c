#include <stdio.h>
#include<string.h>
int main(void)
{
    char a[100],b[100];
    int n1,n2,i,j;
    gets(a);
    gets(b);
    n1=strlen(a);
    n2=strlen(b);
    while(a[i]!=0)
    {
    	printf("%c",a[i]);
    	i++;
    	if(a[i]==a[n1])
    	{
    	for(j=0;j<=n2;j++)
    	{
    	  printf("%c",b[j]);	
    	}
    	}
    }
    return 0;
}
