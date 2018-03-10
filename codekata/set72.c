#include <stdio.h>
#include<string.h>
int main(void)
{
    char a[100]; 
    int k=0,i=0;
    gets(a);
     while(a[i]!='\0') 
     {
     	if(a[i]=='0' || a[i]=='1')
     	{
     		k++;
     	}
         i++;
     }
     if(k==i)
     {
         printf("yes");	
     }
     else
     {
     	printf("No");
     }
    
	return 0;
}
