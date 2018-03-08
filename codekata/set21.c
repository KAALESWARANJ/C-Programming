.#include "stdio.h"
int main(void)
{
intbase,power,result,i;
scanf("%d\n",&base);
scanf("%d\n",&power);
result=base;
for(i=power;i>1;i--)
  {
result=result*base;
  }
printf("%d",result);
return 0;
}
