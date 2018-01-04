#include<stdio.h>
#include<string.h>
int main(void)
{
char a[10],s;
int i,j,r,count=0;
scanf("%s",a);
int b=strlen(a);
for(i=0;i<b;i++)
{
j=a[i];
r=0;
for(int k=i+1;k<b;k++)
{
if(j==a[k])
{
r++;
if(r>=count)
{
count=r;
s=a[k];
}
}
}
}
printf("%c",s);
return 0;
}
