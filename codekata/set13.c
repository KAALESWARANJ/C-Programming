#include<stdio.h>
int main(void)
{
	char ch;
	scanf("%c\n",ch);
	if( ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch== 'u' || ch=='U')
	{
		printf("Vowel");
	}
	else
	{
		printf("consonant");
	}
}
