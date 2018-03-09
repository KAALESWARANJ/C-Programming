#include<stdio.h>
int main()
{
	int a[100],i,j,val,n,max;
	 scanf("%d\n",&n);
	 for(i=0;i<=n;i++)
           {
	scanf("%d\t",&a[i]);
	
            }
       max=a[0];
       for(i=0;i<=n;i++)
         {
            if(a[i]>max)
          {
       	max=a[i];
           }
         }
    printf("%d",max);
    return 0;
	
}
    
