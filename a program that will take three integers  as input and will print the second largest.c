#include<stdio.h>

void main () {

 double a,b,c,secondL,max;
 printf("Enter the value of a : \n");
 scanf("%lf",&a);
 printf("Enter the value of b: \n");
 scanf("%lf",&b);
 printf("Enter the value of c: \n");
 scanf("%lf",&c);

 if (a>b && a>c){
    if(b>c){
        printf("\n\n%.2lf is the 2nd largest number\n", b);
    }
    else {
        printf("\n\n%.2lf is the 2nd largest number\n", c);
    }
 }
 else if(b>c && b>a){
    if(a>c){
        printf("\n\n%.2lf is the 2nd largest number\n", a);
    }
    else{
        printf("\n\n%.2lf is the 2nd largest number\n", c);
    }
 }
 else if(a>b){
    printf("\n\n%.2lf is the 2nd largest number\n", a);

 }
 else{
    printf("\n\n%.2lf is the 2nd largest number\n", b);
 }
 return 0;
}
