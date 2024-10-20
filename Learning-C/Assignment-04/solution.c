#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define PIE 3.14

int main(){
  printf("Input length of radius: ");

  float user_radius_input;
  float area;

  scanf_s("%f", &user_radius_input);

  printf("input: %0.2f\n", user_radius_input);

  area = powf(user_radius_input, 2) * PIE;

  printf("Area of circle with radius %f: %f", user_radius_input, area);

  return 0;
}