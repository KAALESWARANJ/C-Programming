#include <stdio.h>
int main()
{
    int n,rev= 0,rem,in;

    printf("Enter an integer: ");
    scanf("%d", &n);

    in=n;
   while( n!=0 )
    {
        rem= n%10;
        rev= rev*10 + rem;
        n /= 10;
    }
    if (in== rev)
        printf("palindrome");
    else
        printf("not a palindrome");
    
    return 0;
}
