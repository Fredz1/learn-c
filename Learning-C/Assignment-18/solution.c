#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <stdio.h>

void hello(void){
	char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};

	printf("%s", array);
}

void hello_two(void){
	char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33, '\0'};

  printf("%s", array);
}

void hello_puts_one(){
  char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};

  puts(array);

}
void hello_puts_two(){
	char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33, '\0'};

  puts(array);

}


int main(void){
	hello();
  printf("\n");
  hello_two();
  printf("\n");
  hello_puts_one();
  printf("\n");
  hello_puts_two();
}