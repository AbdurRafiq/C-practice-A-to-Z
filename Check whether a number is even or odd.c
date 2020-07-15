#include<stdio.h>

void main() {

   int a,i;
   printf("Please Enter the value of a: ");
   scanf("%d",&a);
   for(i=a;i<=100;++i){
   printf("%d ",i);
   if (i%2==0)
   {
       printf("is the Even number\n");
   }
   else if (i%2==1)
   {
       printf("is the odd number\n ");
   }

   else
   {
       printf(" Error ! ");
   }

   }
}
