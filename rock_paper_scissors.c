#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Variables to store user and computer choices
    char user_choice[50];
    char comp_choice[50];

    // Array of possible choices
    char choices[3][100] = {"Rock", "Paper", "Scissors"};

    // Take input from user
    printf("Enter your choice (Rock/Paper/Scissors): ");
    scanf("%s", user_choice);

    // Generate computer's random choice
    int choice_index = rand() % 3; // Random number between 0-2
    strcpy(comp_choice, choices[choice_index]);

    // Display computer's choice
    printf("Computer chose: %s\n", comp_choice);

    // Compare user choice and computer choice
    if (strcmp(user_choice, comp_choice) == 0) {
        // If both choices are same
        printf("It is a draw :/\n");
    }

    // If user chooses Rock
    else if (strcmp(user_choice, choices[0]) == 0) {
        if (strcmp(comp_choice, choices[1]) == 0) {
            // Rock vs Paper → Computer wins
            printf("Computer wins :(\n");
        } else {
            // Rock vs Scissors → User wins
            printf("You win!\n");
        }
    }

    // If user chooses Paper
    else if (strcmp(user_choice, choices[1]) == 0) {
        if (strcmp(comp_choice, choices[2]) == 0) {
            // Paper vs Scissors → Computer wins
            printf("Computer wins :p\n");
        } else {
            // Paper vs Rock → User wins
            printf("You win :D\n");
        }
    }

    // If user chooses Scissors
    else if (strcmp(user_choice, choices[2]) == 0) {
        if (strcmp(comp_choice, choices[0]) == 0) {
            // Scissors vs Rock → Computer wins
            printf("Computer wins >:)\n");
        } else {
            // Scissors vs Paper → User wins
            printf("You win!!\n");
        }
    }

    // If user enters something invalid
    else {
        printf("Invalid choice! Please type Rock, Paper, or Scissors.\n");
    }

    return 0;
}


