#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

  float players[] = {0,0,0,0,0};
  int games = 5;
  int max_score = 0;
  int max_player = 0;

  for (int i = 0; i <= 5; ++i)
  {
    printf("Game #%d\n", i);
    for (int j = 0; j <= 5; j++){
      printf("Enter scoring total for Player #%d: ", j);
      int user_input;
      scanf("%d", &user_input);
      players[j] += user_input;
    }

    //for (int k = 0; k <= 5; k++){
    //  printf("Game %d\nPlayer %d\nScore %d\n", i, k, players[k]);
    //}
  }

  for (int i = 0; i < 5; ++i){
    players[i] = players[i] / 5;
  }

   for (int i = 0; i < 5; ++i) {
    if (max_score < players[i]) {
      max_score = players[i];
      max_player = i;
    }
  }

  for (int k = 0; k <= 5; k++){
    printf("player %d Score: %.2f", k, players[k]);
  }

  return 0;
}