#include<stdio.h>
int main(void)
{
int n,res,i;
scanf("%d\n",&n);
  res=1;
   for(i=n;i>=1;i--)
    {
       res=res*i;
    }
printf("%d",res);

}
