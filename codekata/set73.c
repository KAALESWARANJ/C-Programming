#include <stdio.h>
#include<string.h>
int main(void)
{
    char a[100]; 
    int k=1,i=0;
    gets(a);
     while(a[i]!='\0') 
     {
     	if(a[i]==' ')
     	{
     		k++;
     	}
     	i++;
     }
     printf("%d",k);
     return 0;
}
     
