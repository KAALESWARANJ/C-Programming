#include<stdio.h>
int main(void)
{
   int n,a[100],b[100],c,i,j=0,k=0,count=0;
   scanf("%d\n",&n);
   for(i=0;i<n;i++)
   {
   	scanf("%d\t",&a[i]);
   		
   }
    for(i=0;i<n;i++)
   {
   	if(a[i]==i)
   	  {
   	    b[j]=a[i];
   	    count++;
   	    j++;
   	  }
   		
   }
   
   if(count==0)
   {
   	printf("-1");
   }
   else
   {
   	for(j=0;j<count;j++)
   	{
   	   for(k=j+1;k<count;k++)
   	   {
   	      if(b[j]<b[k])
   	      {
   	      	c=b[j];
   	      	b[j]=b[k];
   	      	b[k]=c;
   	      }
   	   }
   	}
   
   for(j=0;j<count;j++)
   {
   	printf("%d ",b[j]);
   }
   }
   return 0;
}
