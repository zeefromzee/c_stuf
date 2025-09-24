#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Entry point for the Hangman game
int main() {
    printf("============== HANGMAN STARTING ==============\n");
    srand(time(NULL)); // Seed random number generator

    // Arrays containing words for each category
    char food_words[5][100] = {"watermelon", "cookies", "chocolate", "biscuits", "cauliflower"};
    char animal_words[5][100] = {"koala", "crocodile", "alligator", "sloth", "giraffe"};
    char color_words[5][100] = {"pink", "black", "olivegreen", "purple", "silver"};

    char user_word[50]; // To capture user input for category

    // Prompt user for category
    printf("Enter the criteria of the word (food/animals/colors): \n");
    scanf("%49s", user_word);

    printf("You are allowed three wrong guesses\n");

    int flag = 0; // Tracks if the guess was correct

    // Helper variables for game state
    int wrong_guesses, word_complete;
    char found_letters[100]; // Not used for tracking, but can be for future improvements

    // ================= Food Category =================
    if (strcmp(user_word, "food") == 0) {
        int choice_food = rand() % 5; // Pick a random food word
        strcpy(user_word, food_words[choice_food]);

        // Show underscores for each letter in the chosen word
        for (int i = 0; i < strlen(user_word); i++) {
            printf("_ ");
        }
        printf("\n");

        wrong_guesses = 0;
        word_complete = 0;

        // Main guessing loop
        while (wrong_guesses < 3 && word_complete != strlen(user_word)) {
            char guess;
            printf("Enter the character you want to guess: ");
            scanf(" %c", &guess);
            flag = 0;

            // Check if guess exists in word
            for (int i = 0; i < strlen(user_word); i++) {
                if (guess == user_word[i]) {
                    flag = 1;
                }
            }

            if (flag == 1) {
                printf("You've guessed it correctly\n");
                word_complete += 1;
                printf("Correct letters guessed: %d\n", word_complete);
            } else {
                printf("Wrong guess, try again\n");
                wrong_guesses += 1;
            }

            // Check for win condition
            if (word_complete == strlen(user_word)) {
                printf("You've guessed the word! Congratulations :D\n");
                break;
            }
        }
    }
    // ================= Animal Category =================
    else if (strcmp(user_word, "animals") == 0) {
        int choice_animal = rand() % 5; // Pick a random animal word
        strcpy(user_word, animal_words[choice_animal]);

        // Show underscores for each letter
        for (int i = 0; i < strlen(user_word); i++) {
            printf("_ ");
        }
        printf("\n");

        wrong_guesses = 0;
        word_complete = 0;

        // Main guessing loop
        while (wrong_guesses < 3 && word_complete != strlen(user_word)) {
            char guess;
            printf("Enter the character you want to guess: ");
            scanf(" %c", &guess);
            flag = 0;

            for (int i = 0; i < strlen(user_word); i++) {
                if (guess == user_word[i]) {
                    flag = 1;
                }
            }

            if (flag == 1) {
                printf("You've guessed it correctly\n");
                word_complete += 1;
                printf("Correct letters guessed: %d\n", word_complete);
            } else {
                printf("Wrong guess, try again\n");
                wrong_guesses += 1;
            }

            if (word_complete == strlen(user_word)) {
                printf("You've guessed the word! Congratulations :D\n");
                break;
            }
            printf("\n");
        }
    }
    // ================= Color Category =================
    else if (strcmp(user_word, "colors") == 0) {
        int choice_color = rand() % 5; // Pick a random color word
        strcpy(user_word, color_words[choice_color]);

        for (int i = 0; i < strlen(user_word); i++) {
            printf("_ ");
        }
        printf("\n");

        wrong_guesses = 0;
        word_complete = 0;

        while (wrong_guesses < 3 && word_complete != strlen(user_word)) {
            char guess;
            printf("Enter the character you want to guess: ");
            scanf(" %c", &guess);
            flag = 0;

            for (int i = 0; i < strlen(user_word); i++) {
                if (guess == user_word[i]) {
                    flag = 1;
                }
            }

            if (flag == 1) {
                printf("You've guessed it correctly\n");
                word_complete += 1;
                printf("Correct letters guessed: %d\n", word_complete);
            } else {
                printf("Wrong guess, try again\n");
                wrong_guesses += 1;
            }

            if (word_complete == strlen(user_word)) {
                printf("You've guessed the word! Congratulations :D\n");
                break;
            }
        }
    }
    // ================ Invalid Input =================
    else {
        printf("Invalid Input\n");
    }

    return 0;
}