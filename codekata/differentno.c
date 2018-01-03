#include<stdio.h>
int main(void)
{
	int a[10],s[10]={},k[10]={};
	int i,j,y,z,n,count=0,count1=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		if(a[j]%2==0)
		{
			s[y]=a[j];
			count++;
		}
	            if(a[j]%2!=0)
		{
			k[z]=a[j];
			count1++;
		}
	}
	if(count==1)
	printf("%d",s[y]);
	else
	{
	printf("%d",k[z]);
	}
	return 0;
}
