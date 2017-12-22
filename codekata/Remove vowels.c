#include<stdio.h>
int main(void)
{
	char a[100];
	int i=0,c,temp;
	int j;
	gets(a);
	c=strlen(a);
	int k=strlen(a)-1;
	while(i<k)
	{
		temp=a[i];
		a[i]=a[k];
		a[k]=temp;
		i++;
		k--;
	}
	printf("%s\n",a);
	for(i=0;i<c;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'
		||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
		for(j=i;j<c;j++)
			{
				a[j]=a[j+1];
			}
		c--;
		}
		
	}
		printf("%s\n",a);
	
		return 0;
}
	
	


