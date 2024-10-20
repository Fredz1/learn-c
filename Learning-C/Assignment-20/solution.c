#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
  int num;
  char letter;
  float decimal;
} Solution;


int main(void){

  Solution test_one = {
      5,
      'w', //NOTE: Char is single quotes.
      3.14
  };

  

  printf("This is the int: %d, this is the char: %c, this is the float: %f", test_one.num, test_one.letter, test_one.decimal);

  return 0;
}