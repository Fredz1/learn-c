#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

  int age = 20;

  int *pointer_to_age = &age;

  printf("The value of our pointer is: %p", (void *)pointer_to_age);

  return 0;
}