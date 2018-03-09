#include<stdio.h>
#include<string.h>
int main(void)
  {
  	char a[100];
  	int i,b,count=0;
  	gets(a);
  	b=strlen(a);
            for(i=0;i<=b;i++)
  	{
  		if(((a[i]>=27 && a[i]<=47) && a[i]!=32)||(a[i]>=58 && a[i]<=64)||(a[i]>=91 && a[i]<=96)
  		||(a[i]>=123 && a[i]<=126))
  		{
  		count++;
  		}
  	}
  		
  	    
  	printf("%d",count);
  	 
    return 0;
  }
