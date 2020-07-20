#include<stdio.h>

void main () {

 int a,b,c,max;
 printf("Enter the value of a : \n");
 scanf("%d",&a);
 printf("Enter the value of b: \n");
 scanf("%d",&b);
 printf("Enter the value of c: \n");
 scanf("%d",&c);

 if (a>b && c<a){
    max  = a;

 }
 else if(b>a && c<b){

    max = b;

 }
 else if(c>b && c>a){

    max = c;

 }
 printf("The max number is %d",max);
}




