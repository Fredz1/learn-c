#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define SECONDS_IN_HOUR (60*60)
#define SECONDS_IN_MIN 60

int main(){

  int user_input, hours, mins, secs;

  printf("Enter time number of seconds: ");
  scanf_s("%d", &user_input);

  //printf("User entered: %d", user_input);

  hours = user_input / SECONDS_IN_HOUR;
  mins = ( user_input - ( hours * SECONDS_IN_HOUR ) ) / SECONDS_IN_MIN;
  secs = ( user_input - ( hours * SECONDS_IN_HOUR ) - ( mins * SECONDS_IN_MIN ) );

  //printf("Hours: %d\n", hours);
  //printf("Mins: %d\n", mins);
  //printf("Secs: %d\n", secs);

  printf("%d seconds is equal to %d hours, %d minutes and %d seconds.#", user_input, hours, mins, secs);
}