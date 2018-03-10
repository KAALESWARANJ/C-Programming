#include <stdio.h>
int main()
{
    int a,b,i,h;;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a && i<=b;++i)
    {
        if(a%i==0 && b%i==0)
            h=i;
    }
    printf("%d",h);
    return 0;
}
