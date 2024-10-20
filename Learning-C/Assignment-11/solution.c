#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

  int* score_record[10]= {};
  char* user_continue = "Y";
  char* cont = strcmp(&user_continue, "Y");
  int count = 0;
  int accum = 0;

  while(cont == 0 && count < 10){

    int* score = 0;

    printf("Enter a test score: ");

    scanf("%d", &score);
    
    score_record[count] = score;

    printf("Entered: %d\n", score);
    
    for (int i = 0; i < 10; i++){
      printf("%d\n", score_record[i]);
    }

    printf("Would you like to continue? (Y/N): ");

    scanf("%s", &user_continue);

    count++;
    //printf("continue?: %s", &cont);

  }

  for (int i = 0; i < count; i++){

    accum += *score_record[i];
  }

  printf("Average grade: %d", &accum);

  return 0;
}