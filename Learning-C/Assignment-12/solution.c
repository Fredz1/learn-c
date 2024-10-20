#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]){
  int user_input = 5000;
  int heads = 0;
  int tails = 0;
  srand(time(NULL));

  printf("Enter the number of times you want to flip the coin: \n");
  //scanf("%d", &user_input);

  for (int i = 0; i < user_input; i++){
    int random = rand() % 100;
    if(random <= 50) {

      heads++;
    } else {
      tails++;
    }

    //printf("%d\n", random);
  }
  printf("After flipping the coin %d times, the results were\n", user_input);
  printf("%d Heads:\n", heads);
  printf("%d Tails:\n", tails);

  return 0;
}