#include <stdio.h>
int main(void)
{
    char a[100],b[100];
    int n1,n2,count=0,count1=0,i,j;
    gets(a);
    gets(b);
    n1=strlen(a);
    n2=strlen(b);
    for(i=0;i<=n1;i++)
    {
    	count++;
    }
    	for(j=0;j<=n2;j++)
    	{
    	  count1++;	
    	}
         	if(count==count1)
    	    {
    		printf("%s %s",a,b);
    	    }
    	   else if(count>count1)
    	    {
    		printf("%s",a);
          	}
    	   else
         	{
    		printf("%s",b);
    	    }
    
	return 0;
}
