#include<stdio.h>
int main(void)
   {
     char a;
     printf("Enter the character:\n");
     scanf("%c",&a);
      if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
        {
          printf("Alphabet");
        }
     else
        {
          printf("Not a alphabet");
        }
    return 0;

 }
