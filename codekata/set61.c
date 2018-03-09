#include<stdio.h>
int main()
{
  int n,t,f=1;
  scanf("%d",&n);
  t=n;
  while(t)
  {
      t=t/10;
      f = f*10;
  }
  while(f>1)
  {
      f = f/10;
      printf("%d ",n/f);
      n=n % f;
  }

  return 0;
}
