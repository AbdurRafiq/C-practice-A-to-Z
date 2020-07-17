#include<stdio.h>

void main(){

 char ch;
 int i;
for(i=1;i<=10;i++){
 printf("Enter a character: ");
 scanf("%c", &ch);

 if (ch>='a' && ch<='z' || ch>='A' && ch<='Z' ){

    printf("%c is an alphabet\n",ch);

 }
 else{
    printf("%c is not an alphabet\n");
 }
}



}
