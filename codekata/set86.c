#include <stdio.h>
int main(void)
{
    int n,i,count=0;
    scanf("%d\n",&n);
    for(i=2;i<n;i++)
    {
    	if(n%i==0)
    	{
    		count++;
    		break;
    	}
    }
    if(count!=0)
    {
    	printf("yes");
    }
    else
    {
    	printf("no");
    }
    
	return 0;
}
