#include <stdio.h>

void printFunction(int a, int b){
  printf("Your number is between %d and %d!", a, b);
}

int main(){

  printf("Enter a number between 1 and 500.");

  int num;
  printf("Enter a number between 1 and 500: ");
  scanf_s("%d", &num);

  if(num >= 1 && num <= 100){
    printFunction(1, 100);
  } else if (num >= 101 && num <= 200){
    printFunction(101, 200);
  } else if (num >= 201 && num <= 300){
    printFunction(201, 300);
  } else if (num >= 301 && num <= 400){
    printFunction(301, 400);
  }else if (num >= 401 && num <= 500){
    printFunction(401, 500);
  } else {
    printf("Your number was not in any of our ranges.");
  }
  
  

  
  return 0;
}