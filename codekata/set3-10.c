#include<stdio.h>
int main(void)
{
	int m1,m2,m3,h1,h2,h3;
	scanf("%d  %d\n",&h1,&m1);
	scanf("%d  %d\n",&h2,&m2);
	h3=h1-h2;
	m3=m1-m2;
	printf("%d  %d",h3,m3);
}
