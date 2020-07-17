#include<stdio.h>

void main(){

  int i=1;
  int a;

while(i<10){
  printf("Please enter an integer number:\n");
  scanf("%d",&a);

  if (a>0){
    printf("The number is Positive\n");

  }
  else if (a<0){
    printf("The number is Negative\n");
  }
  else{
    printf("The number is Zero\n");
  }
  i++;
}


}

