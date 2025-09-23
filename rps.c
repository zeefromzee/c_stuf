#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    srand(time(NULL));
    char user_choice[50];
    char comp_choice[50];
    char choices[3][100]={"Rock", "Paper", "Scissors"};
    printf("Enter your choice(Rock/Paper/Scissors): ");
    scanf("%s", user_choice);
    
    int choice_index= rand() % 3;
    strcpy(comp_choice, choices[choice_index]);
    printf("Computer chose: %s\n", comp_choice);
    
  if (strcmp(user_choice, comp_choice)==0){
      printf("It is a draw :/\n");
  } 
      
  else if (strcmp(user_choice, choices[0])==0){
      if (strcmp(user_choice,choices[1])==0){
        printf("Computer wins :(\n");
       
  
  }else{
      printf("You win\n");
    }
  }

  else if (strcmp(user_choice, choices[1])==0){
      if (strcmp(comp_choice, choices[2])==0){
        printf("Computer wins :p\n");
    } else{
      printf("You win :D\n");
    }

  }

    else if (strcmp(user_choice, choices[2])==0){
    if (strcmp(comp_choice, choices[0])==0){
      printf("Computer wins\n");
    }
  } else {
    printf ("You win!! :)\n");
  } 
  
}




