#include <stdio.h>
int main(void)
{
	long int N;
	scanf("%ld\n",&N);
	if(N>0)
	printf("Positive");
	if(N<0)
	printf("Negative");
	if(N==0)
	printf("Zero");
	return 0;
}
