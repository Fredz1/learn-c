#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(){
  clock_t begin = clock();

  char *firstName;
  char *lastName;

  firstName = malloc(1024 * sizeof(char));
  lastName = malloc(1024 * sizeof(char));

  printf("enter you first name: ");
  scanf("%s", firstName);
  firstName = realloc(firstName, strlen(firstName)+1);

  printf("enter you last name: ");
  scanf("%s", lastName);
  lastName = realloc(lastName, strlen(lastName)+1);

  clock_t end = clock();

  printf("Hello %s %s!", firstName, lastName);
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("Time spent: %lf", time_spent);
}