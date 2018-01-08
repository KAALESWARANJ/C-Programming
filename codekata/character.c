#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[10];
	int i,n,choices,pos;
            scanf("%s",a);
            n=strlen(a);
            scanf("%d",&choices);
            scanf("%d",&pos);
	if(choices==1)
	{
		for(i=pos-1;i<n;i=i+pos)
		{
			a[i]=tolower(a[i]);
		            a[0]=toupper(a[0]);
		
		}
		
	}
	if(choices==2)
	{
		for(i=pos-1;i<n;i=i+pos)
		
		{
			a[i]=toupper(a[i]);
		}	
		         
	}
	for(i=0;i<n;i++)
		{
			printf("%c",a[i]);
		}  
return 0;
}
