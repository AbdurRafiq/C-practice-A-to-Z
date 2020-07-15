#include<stdio.h>

void main(){

  char c;
  int lower_case, upper_case,i;

  printf(" %d Enter an alphabet: " ,i);
  scanf("%c", &c);

  lower_case = (c=='a' || c =='e' || c == 'i' || c=='o' || c=='u');

  upper_case = (c=='A' || c == 'E' || c== 'I' || c == 'O' || c=='U');

  if (lower_case || upper_case)
  {
      printf("The character is Vowel \n");

  }
  else
  {
      printf("The character is consonant \n");
  }





}
