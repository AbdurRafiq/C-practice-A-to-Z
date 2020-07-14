#include<stdio.h>

void main() {

   int i=1,number,digit;
   printf("Please enter the range: \n " );
   scanf("%d",&number);
   printf("Please enter the Digit of mul: \n " );
   scanf("%d",&digit);
   while (i<=number)
   {

       printf("%d * %d = %d\n",digit,i,i*digit);
           ++i;
   }

   return 0;


}
