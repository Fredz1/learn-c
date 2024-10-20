#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void){

  char *variable= (char *)malloc(100 * sizeof(char));

  if(variable == NULL){
    printf("Pointer is null");
    exit(1);
  };

  printf("Memory was successfully allocated");

  free(variable);

  return 0;
}