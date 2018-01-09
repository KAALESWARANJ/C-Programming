#include<stdio.h>
int main(void)
{ 
   int s[100];
   int i,n;
   scanf("%d\n",&n);
   for(i=0;n>0;i++)
   {
     s[i]=n%2;
     n=n/2;
   }
   for(i=i-1;i>=0;i--)
   {
   if(s[i]==1 || s[i]==0)
   {
     printf("%d",s[i]);
   }
     else
     {
     printf("ERROR");
     break;
   }
   }
     return 0;
}
   
   
   
   
	
               
