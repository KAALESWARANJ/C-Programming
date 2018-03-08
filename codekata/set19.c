#include<stdio.h>
int main(void)
{
    int k,i,n,sum = 0,a[100];
   // printf("Enter number of element\n");
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d\n",&a[i]);
    }
    
    printf("Enter a positive integer: \n");
    scanf("%d\n",&k);

    for(i=0;i<=k;i++)
    {
        sum =sum+a[i];  
    }

    printf("Sum = %d",sum);

    return 0;
}
