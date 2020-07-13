#include<stdio.h>

void main(){

   int number1,number2;
   char a;
   printf("Please enter the  number1: \n ");
   scanf("%d",&number1);
   printf("Please enter the number2: \n");
   scanf("%d",&number2);


   if (number1 == number2){
    printf("Result: %d = %d",number1,number2);
   }
    else if (number1<number2){
    printf("Result: %d < %d",number1,number2);
   }
   else if (number1>number2){
    printf("Result: %d > %d",number1,number2);
   }
   else {
    printf("%c is a latter ",a);

   }

   return 0;



}
