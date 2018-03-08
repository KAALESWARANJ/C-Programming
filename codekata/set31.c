#include <stdio.h>
 
int main(void)
{
    int c, l,diff, val;
    scanf("%d", &l);
    scanf("%d", &diff);
    for(c= 1; c<= l; c++)
    {
        val= 1 + (c - 1) *diff;
        printf("%d \t",val);
    }
    printf("\n\n");
    return 0;
}
