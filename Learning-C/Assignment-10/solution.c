#include <stdio.h>
#include <stdlib.h>

int main(){

  int intarr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 22, 1231, 132, 2332131231};

  printf("The array has %d elements.", sizeof(intarr) / sizeof(int));

  return 0;
}