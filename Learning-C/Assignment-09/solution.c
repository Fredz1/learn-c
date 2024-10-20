#include <stdio.h>
#include <stdlib.h>

#define MIN_ARGS 2

void print_welcome(char firstName[], char lastName[]){
  printf("Hello, %s %s", &firstName, &lastName);
}



int main(int argc, char** argv[]){

  //printf("%s", argv[0]);

  if(argc-1 == MIN_ARGS){
    print_welcome(*argv[1], *argv[2]);
  }
  else {
    printf("Too few arguments");
  }

  return 0;
}