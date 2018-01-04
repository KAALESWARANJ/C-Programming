#include<stdio.h>
int main(void)
{
int a[10],n,i,temp;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
scanf("%d\n",&a[i]);
}
i=0;
while(i<n)
{
temp=a[i];
i=i+temp;
}
if(a[n-1]==temp)
printf("True");
else
printf("False"
return 0;
}
