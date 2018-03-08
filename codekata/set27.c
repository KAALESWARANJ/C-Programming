#include<stdio.h>  
int main(void)    
{    
  int n,rem,res=0,temp;    
  scanf("%d",&n);    
  temp=n;    
  while(n>0)    
   {    
    rem=n%10;    
    res=res+(rem*rem*rem);    
    n=n/10;    
    }    
if(temp==res)    
printf("armstrong  number");    
else    
printf("not armstrong number");    
return 0;  
}   
