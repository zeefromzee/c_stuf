#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//==========================================================================================================
//BEFORE YOU GO ON READING MY CODE, I WOULD LIKE TO PREFACE THAT I MADE THIS CODE WHILE 
//MY MENTAL HEALTH WAS  RELATIVELY UNPLEASNT, SO PLS FORGIVE MY IMMATURE ATTEMPT AT MAKING A GAME 
//OF SNAKE AND LADDERRS; THOUGH I CAN ASSURE YOU MY OTHER PROJECTS IN C ARE MADE MUCH BETTER THAN THIS ONE
//AND I'D LIKE TO QUOTE ON WHAT SCHRODINGER ONCE SAID, "I'M SORRY THAT I HAD ANYTHING TO DO WITH THIS."
//==========================================================================================================
int dice_roll(int player){
    int dice[6]={1,2,3,4,5,6};
    int array_size = sizeof(dice) / sizeof(dice[0]);
    
    int random_index = rand() % array_size;
    int random_choice = dice[random_index];
    
    printf("The dice has rolled: %d\n", random_choice);
    
    if(dice[random_index] != 0){
        player = player + dice[random_index];
        printf("Your cooki is at: %d\n", player);
    }
    return player;
}

int main(){
    srand(time(NULL));
    int player = 0;
    int ladder[9]={53, 12, 36, 2, 78, 45, 87, 30};
    
    player = dice_roll(player);  
    
    while(player < 100){
        printf("Let's roll again\n");
        printf("Do you want to roll again?(y/n): ");
        char choice;
        scanf(" %c", &choice);
        if(choice == 'y'){
            player = dice_roll(player);  
            if(player==ladder[0]){
                printf("Congratulations! You just found a ladder :D");
                player+=15;
                printf("Your cooki has been placed at: %d", player);
            }
            else if(player==ladder[1]){
                printf("Congratulations! You just found a ladder :D");
                player+=30;
                printf("Your cooki has been placed at: %d", player);
            }
            else if(player==ladder[2]){
                printf("Congratulations! You just found a ladder :D");
                player+=15;
                printf("Your cooki has been placed at: %d", player);
            }
            else if(player==ladder[3]){
                printf("Congratulations! You just found a ladder :D");
                player+=45;
                printf("Your cooki has been placed at: %d", player);
            }
            else if(player==ladder[4]){
                printf("Congratulations! You just found a ladder :D");
                player+=15;
                printf("Your cooki has been placed at: %d", player);
            }
            else if(player==ladder[5]){
                printf("Congratulations! You just found a ladder :D");
                player+=15;
                printf("Your cooki has been placed at: %d", player);
            }
            else if(player==ladder[6]){
                printf("Congratulations! You just found a ladder :D");
                player+=15;
                printf("Your cooki has been placed at: %d", player);
            }
            else if(player==ladder[7]){
                printf("Congratulations! You just found a ladder :D");
                player+=15;
                printf("Your cooki has been placed at: %d", player);
            }
            else{
            break;
            }
        }
    
    if(player >= 100){
        printf("You won!\n");
    }
    return 0;
    
    }
}
    
