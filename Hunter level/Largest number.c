#include <stdio.h>
int lar(int a1[],int s1);
int main()
{
	int a[10],s,i,a1[10],s1;
	printf("Enter size\n");
	scanf("%d",&s);
	printf("Enter array elements;\n");
	for(i=0;i<=s;i++)
	{
	scanf("%d",&a[i]);
	}
	int ret;
	ret=lar(a,s);
	printf("%d",ret);
	return 0;
}
int lar(int a1[10],int s1)
{
	int max,i;
	max=a1[0];
	for(i=0;i<=s1;i++)
	{
		if(a1[i]>max)
		{
		max=a1[i];
		}
	}
	return max;

	}
