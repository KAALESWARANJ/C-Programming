#include <stdio.h>
int main(void) 
 {
 	int b,i;
 	char temp;
 	char str[10];
 	gets(str);
 	b=strlen(str);
 	if(b%2==0)
 	{
 	for(i=0;i<b;i+=2)
 	{
 		temp=str[i];
 		str[i]=str[i+1];
 		str[i+1]=temp;
 	}
 	}
 	else
 	{
              for(i=0;i<b-1;i+=2)
              {
              	temp=str[i];
 		str[i]=str[i+1];
 		str[i+1]=temp;
              	
              }
 	}
  	
  for(i=0;i<b;i++)
  {
  	printf("%c",str[i]);
  	
  }
  return 0;
 }
  
 
 		
 
