#include<stdio.h>

void main(){

   double a ,b;
   printf("Please Enter the value of a: \n");
   scanf("%lf",&a);
   printf("Please Enter the value of b: \n");
   scanf("%lf",&b);

   //swapping

   a = a - b;
   b = a + b;
   a = b - a;

   printf("After swapping the number of a %.1lf : ",a);
   printf("After swapping the number of a %.1lf : ",b);



}
