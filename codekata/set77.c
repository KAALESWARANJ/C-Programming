#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d\n",&n);
            while((n%10)!=0 || n<10)
            {
               n++;	
            }
            printf("%d",n);
            
}
