#include<stdio.h>
int count=1;
int main(void)
{
  int count=0;
  while(++count<5)
  {
  	static int count=0;
  	++count;
  	printf("%d\n",count);
  }
  printf("%d\n",count);
  print();
  return 0;
}

void print()
{
	++count;
	printf("%d\n",count);
}
