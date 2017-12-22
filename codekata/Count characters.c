#include<stdio.h>
int main(void)
  {
  	char a[100];
  	int i,b,count=0;
  	int s=0;
  	gets(a);
  	b=strlen(a);
  	while(a[i]!='\0')
  	{
  		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
  		{
  		count++;
  		}
  		else
  		{
  		s++;
  		}
  		i++;
  	}
  	    
  	printf("Alphabets-%d\n",count);
  	 printf("Numbers-%d\n",s);
    return 0;
  }
