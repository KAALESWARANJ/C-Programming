#include<stdio.h>
#include<string.h>
int main(void)
{
	char r[100];
	int a[100],j,m,b;
	scanf("%s",r);
	b=strlen(r);
	for(j=0;j<b;j++)
	{
		switch(r[j])
		{
			case 'I':a[j]=1;
			break;
		    case 'V':a[j]=5;
			break;
			case 'X':a[j]=10;
			break;
			case 'L':a[j]=50;
			break;
			case 'C':a[j]=100;
			break;
			case 'O':a[j]=500;
			break;
			case 'M':a[j]=1000;
			break;
			default:
			printf("END");
			break;
		}
		}
		m=a[b-1];
		for(j=b-1;j>0;j--)
		{
			if(a[j]>a[j-1])
			{
				m=m-a[j-1];
			}
			else
			{
				m=m+a[j-1];
				
		     }
		}
		     printf("%d",m);
	           	return 0;
	}
