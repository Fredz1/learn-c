#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int numerator, denominator;
  float remainder_num;

  printf("Enter a numerator: ");
  scanf_s("%d", &numerator);

  printf("Enter a denominator: ");
  scanf_s("%d", &denominator);

  clock_t begin = clock();

  remainder_num = remainder(numerator, denominator);

  if (remainder_num == 0){
    printf("There is NOT a remainder!#\n");
  } else {
    printf("There is a remainder!#\n");
  }

  clock_t end = clock();

  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("Time spent: %lf", time_spent);

  return 0;
}