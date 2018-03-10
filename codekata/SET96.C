#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[1000];
	int i,n,j,count=0;
            gets(s);
            n=strlen(s);
            for(i=0;i<=n;i++)
            {
              for(j=i+1;j<n;j++)
              {
               if(s[i]==s[j])
               {
               	count++;
               	break;
               }
              }
 
            }
            if(count!=0)
            {
            	printf("no");
            }
            else
            {
            	printf("yes");
            }
	
	
}
