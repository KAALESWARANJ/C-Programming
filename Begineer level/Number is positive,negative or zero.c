#include <stdio.h>
int main(void)
{
	int a;
	printf("Enter the number:\n");
	scanf("%d",&a);
	if(a>0)	
	printf("Positive");
	else if(a<0)
	printf("Negative");
	else
	printf("zero");
	return 0;
}    
