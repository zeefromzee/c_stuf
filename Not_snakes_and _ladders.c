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
    
    player = dice_roll(player);  
    int ladder[7]={5, 35, 60, 81, 14};
    int increase[7]={5, 6, 7, 8,10, 15};
    int snakes[10]={29, 40, 55, 67, 72, 92,14, 22,30};
    int dec[7]={5, 2, 20, 12, 9, 10 };
    

    }
}
    while(player < 100){
        printf("Let's roll again\n");
        printf("Do you want to roll again?(y/n): ");
        char choice;
        scanf(" %c", &choice);
        
        if(choice == 'y'){
            for(int i=10; i>=snakes[0];i--){
            player = dice_roll(player);            
                if (player==snakes[0]){
                    for (int i=0; i<=dec[0]; i++){
                        int dec_size= sizeof(dec)/ sizeof(dec[0]);
                        int random_dec = rand() % dec_size;
                        int dec_choice=dec[random_dec];
                        player=player-dec_choice;
                        printf("Your cooki is at: %d", player);
            
            for (int i=7; i>=ladder[0]; i--){
                if (player==ladder[i]){
                    for (int i=0; i<=increase[7]; i++){
                        int increase_size=sizeof(increase)/ sizeof(increase[0]);
                        int random_increase= rand()% increase_size;
                        int increase_choice= increase[random_increase];
                        player=player+increase_choice;
                        printf("Your cooki is at: %d", player);     
                        }
        }
    }
            
            
        }else{
            break;
        }
    }
    
    if(player >= 100){
        printf("You won!\n");
    }
    
    return 0;
            }
}}
