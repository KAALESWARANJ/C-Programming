#include <stdio.h>

int main(void) {
	
	int n,i,a[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
	}
    for(i=0;i<n;i++)
        {
        	 if((i==0 || i%2==0) && a[i]%2!=0)
        	 {
        	 	printf("%d\t",a[i]);
        	 }
        	 if(i%2!=0  && a[i]%2==0)
        	 {
        	 	printf("%d\t",a[i]);
        	 }
        }	
       
	return 0;
}
