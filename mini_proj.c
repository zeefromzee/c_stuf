#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


int completed[4] = {0, 0, 0, 0};
char clues[4][20];
int clue_count = 0;


void wait_for_enter();
void welcome_message();
void phase1();
void diary_open();
void constellation_menu();
void orion_scene();
void cassiopeia_scene();
void lyra_scene();
void andromeda_scene();
void final_reveal();
void display_orion_art();
void display_cassiopeia_art();
void display_lyra_art();
void display_andromeda_art();


void wait_for_enter() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


void display_orion_art() {
    printf("\n");
    printf("       *\n");
    printf("      * *\n");
    printf("     *   *\n");
    printf("       *\n");
    printf("    *  *  *\n");
    printf("   *       *\n");
    printf("  *         *\n");
    printf("\n");
}

void display_cassiopeia_art() {
    printf("\n");
    printf("    *\n");
    printf("     *\n");
    printf("    *\n");
    printf("   *\n");
    printf("  *\n");
    printf("\n");
}

void display_lyra_art() {
    printf("\n");
    printf("    *\n");
    printf("   * *\n");
    printf("  *   *\n");
    printf("   * *\n");
    printf("    *\n");
    printf("\n");
}

void display_andromeda_art() {
    printf("\n");
    printf("      *\n");
    printf("     * *\n");
    printf("    *   *\n");
    printf("   *     *\n");
    printf("  *       *\n");
    printf("    *   *\n");
    printf("      *\n");
    printf("\n");
}


void welcome_message() {
    printf("===========Welcome to Starlight Messages===========\n");
    sleep(2);
    printf("This is a story choice game where your choices affect the outcome.\n");
    printf("Make your choices wisely to reach the best ending!\n\n");
    sleep(2);
    printf("The war is over. After years of chaos, the galaxy is finally quiet.\n");
    sleep(3);
    printf("Your family is packing up, preparing to move to a new settlement.\n");
    sleep(3);
    printf("Tonight, you're alone in the attic, sorting through your grandmother's belongings.\n");
    sleep(3);
    printf("\nRain patters against the roof. Thunder rumbles in the distance.\n");
    sleep(3);
    printf("Most of the boxes are packed, but one old trunk in the corner remains untouched.\n");
    sleep(3);
    printf("\nAs lightning flashes outside, you notice something strange...\n");
    sleep(3);
    printf("A faint glow is coming from inside the trunk.\n");
    sleep(3);
    printf("\nPress Enter to approach the trunk...\n");
    wait_for_enter();
}

// Phase 1: Finding the diary
void phase1() {
    printf("\nYou kneel beside it, hands trembling slightly as you lift the heavy lid.\n");
    sleep(3);
    printf("Inside, wrapped in faded cloth, is a leather bound diary.\n");
    sleep(3);
    printf("It's glowing with soft starlight, as if the constellations themselves are trapped in its pages.\n");
    sleep(3);
    printf("\nThis was your grandmother's. But you've never seen it glow before.\n");
    sleep(3);
    printf("\nPress Enter to open the diary...\n");
    wait_for_enter();
}

// Opening the diary
void diary_open() {
    printf("\nThe diary falls open to the first page.\n");
    sleep(2);
    printf("The handwriting is your grandmother's, but younger, more hopeful.\n");
    sleep(3);
    printf("\n-------------------------------------------\n");
    sleep(2);
    printf("'To whoever finds this:\n\n");
    sleep(2);
    printf("If these pages are glowing, it means the stars remember.\n");
    sleep(3);
    printf("What you're about to read are not just my notes on constellations.\n");
    sleep(3);
    printf("They are messages. Memories. A conversation across the void.\n");
    sleep(3);
    printf("\nDuring the war, I had a friend on the other side of the galaxy.\n");
    sleep(3);
    printf("We found a way to speak through the stars themselves.\n");
    sleep(3);
    printf("Each constellation carried our words, our hopes, our fears.\n");
    sleep(3);
    printf("\nBut one day, the messages stopped coming.\n");
    sleep(3);
    printf("I never knew why. I never knew what happened to them.\n");
    sleep(3);
    printf("\nThe answer is hidden in these pages.\n");
    sleep(2);
    printf("Find the clues. Decode the constellations.\n");
    sleep(2);
    printf("Finish what I couldn't.'\n");
    sleep(3);
    printf("-------------------------------------------\n\n");
    sleep(2);
    printf("Your hands are shaking. This is bigger than you thought.\n");
    sleep(3);
    printf("\nPress Enter to turn the page...\n");
    wait_for_enter();
}

// Orion constellation scene
void orion_scene() {
    printf("\n========== ORION - THE HUNTER ==========\n");
    sleep(2);
    display_orion_art();
    sleep(2);
    printf("Date: Year 2247, Day 43 of the War\n\n");
    sleep(2);
    printf("Orion is one of the most recognizable constellations in the night sky.\n");
    sleep(2);
    printf("Named after a hunter in Greek mythology, it contains some of the brightest stars.\n");
    sleep(2);
    printf("The three stars forming Orion's belt are easily visible from Earth.\n");
    sleep(3);
    printf("\n--- Hidden Message Revealed ---\n\n");
    sleep(2);
    printf("'We found a way to talk through Orion tonight.\n");
    sleep(3);
    printf("They're scared but safe. The fighting hasn't reached their sector yet.\n");
    sleep(3);
    printf("We watched the same stars, light years apart, and felt close.\n");
    sleep(3);
    printf("Orion the Hunter became Orion the Messenger.\n");
    sleep(3);
    printf("I told them to stay strong. They told me the same.\n");
    sleep(3);
    printf("For the first time since the war started, I felt hope.'\n\n");
    sleep(3);
    printf("At the bottom of the page, a single word glows brighter than the rest...\n");
    sleep(3);
    printf("\n>>> CLUE FOUND: SECTOR <<<\n\n");
    sleep(2);
    printf("Press Enter to return to the diary...\n");
    wait_for_enter();
}


void cassiopeia_scene() {
    printf("\n========== CASSIOPEIA - THE QUEEN ==========\n");
    sleep(2);
    display_cassiopeia_art();
    sleep(2);
    printf("Date: Year 2248, Day 187 of the War\n\n");
    sleep(2);
    printf("Cassiopeia is a distinctive W shaped constellation in the northern sky.\n");
    sleep(2);
    printf("Named after a vain queen in Greek mythology who boasted about her beauty.\n");
    sleep(2);
    printf("It's circumpolar, meaning it never sets below the horizon at mid northern latitudes.\n");
    sleep(3);
    printf("\n--- Hidden Message Revealed ---\n\n");
    sleep(2);
    printf("'Cassiopeia carried their voice today, fainter than before.\n");
    sleep(3);
    printf("The war is spreading. They said the fighting is getting closer.\n");
    sleep(3);
    printf("Their messages are shorter now, more urgent.\n");
    sleep(3);
    printf("We don't talk about dreams anymore, only survival.\n");
    sleep(3);
    printf("But even through the fear, knowing they're still out there...\n");
    sleep(3);
    printf("It's enough to keep going.'\n\n");
    sleep(3);
    printf("A second glowing word appears beneath the entry...\n");
    sleep(3);
    printf("\n>>> CLUE FOUND: SEVEN <<<\n\n");
    sleep(2);
    printf("Press Enter to return to the diary...\n");
    wait_for_enter();
}


void lyra_scene() {
    printf("\n========== LYRA - THE HARP ==========\n");
    sleep(2);
    display_lyra_art();
    sleep(2);
    printf("Date: Year 2249, Day 312 of the War\n\n");
    sleep(2);
    printf("Lyra is a small constellation representing the lyre of Orpheus.\n");
    sleep(2);
    printf("Its brightest star, Vega, is one of the brightest stars in the night sky.\n");
    sleep(2);
    printf("In mythology, Orpheus played music so beautiful it could charm even stones.\n");
    sleep(3);
    printf("\n--- Hidden Message Revealed ---\n\n");
    sleep(2);
    printf("'Through Lyra, they told me they have to leave.\n");
    sleep(3);
    printf("Their planet isn't safe anymore. Evacuation orders came through.\n");
    sleep(3);
    printf("They don't know where they're going. Communication will be harder.\n");
    sleep(3);
    printf("Maybe impossible.\n");
    sleep(3);
    printf("I asked them to promise they'd try to reach out when they could.\n");
    sleep(3);
    printf("They said they'd find a way. They always do.\n");
    sleep(3);
    printf("But I'm scared this might be goodbye.'\n\n");
    sleep(3);
    printf("Through tears, you see a third word glowing...\n");
    sleep(3);
    printf("\n>>> CLUE FOUND: DELTA <<<\n\n");
    sleep(2);
    printf("Press Enter to return to the diary...\n");
    wait_for_enter();
}


void andromeda_scene() {
    printf("\n========== ANDROMEDA - THE CHAINED MAIDEN ==========\n");
    sleep(2);
    display_andromeda_art();
    sleep(2);
    printf("Date: Year 2250, Day 89 of the War\n\n");
    sleep(2);
    printf("Andromeda is home to the Andromeda Galaxy, the nearest spiral galaxy to the Milky Way.\n");
    sleep(2);
    printf("Named after a princess in Greek mythology who was chained as a sacrifice.\n");
    sleep(2);
    printf("The galaxy contains approximately one trillion stars.\n");
    sleep(3);
    printf("\n--- Hidden Message Revealed ---\n\n");
    sleep(2);
    printf("'It's been weeks. No messages through any of our constellations.\n");
    sleep(3);
    printf("Then tonight, Andromeda blazed with light.\n");
    sleep(3);
    printf("One final message, rushed and broken:\n");
    sleep(3);
    printf("\"Safe. War ending soon. Will wait for you at--\"\n");
    sleep(3);
    printf("And then... nothing. The connection died.\n");
    sleep(3);
    printf("The war ended three days later.\n");
    sleep(3);
    printf("I've searched every constellation since. Nothing.\n");
    sleep(3);
    printf("Where are you, my friend? Where did you go?'\n\n");
    sleep(3);
    printf("The final clue pulses with desperate light...\n");
    sleep(3);
    printf("\n>>> CLUE FOUND: HAVEN <<<\n\n");
    sleep(2);
    printf("Press Enter to return to the diary...\n");
    wait_for_enter();
}


void constellation_menu() {
    while(clue_count < 4) {
        printf("\n\n========================================\n");
        printf("       CONSTELLATION ENTRIES\n");
        printf("========================================\n");
        printf("Clues collected: %d/4\n\n", clue_count);
        
        if(completed[0] == 0) 
            printf("1. Orion - The Hunter\n");
        else 
            printf("1. Orion [EXAMINED]\n");
        
        if(completed[1] == 0) 
            printf("2. Cassiopeia - The Queen\n");
        else 
            printf("2. Cassiopeia [EXAMINED]\n");
        
        if(completed[2] == 0) 
            printf("3. Lyra - The Harp\n");
        else 
            printf("3. Lyra [EXAMINED]\n");
        
        if(completed[3] == 0) 
            printf("4. Andromeda - The Chained Maiden\n");
        else 
            printf("4. Andromeda [EXAMINED]\n");
        
        printf("\nChoose a constellation to examine (1-4): ");
        
        int choice;
        scanf("%d", &choice);
        getchar();
        
        switch(choice) {
            case 1:
                if(completed[0] == 0) {
                    orion_scene();
                    strcpy(clues[clue_count], "SECTOR");
                    clue_count++;
                    completed[0] = 1;
                } else {
                    printf("\nYou've already examined this constellation.\n");
                    sleep(2);
                }
                break;
            case 2:
                if(completed[1] == 0) {
                    cassiopeia_scene();
                    strcpy(clues[clue_count], "SEVEN");
                    clue_count++;
                    completed[1] = 1;
                } else {
                    printf("\nYou've already examined this constellation.\n");
                    sleep(2);
                }
                break;
            case 3:
                if(completed[2] == 0) {
                    lyra_scene();
                    strcpy(clues[clue_count], "DELTA");
                    clue_count++;
                    completed[2] = 1;
                } else {
                    printf("\nYou've already examined this constellation.\n");
                    sleep(2);
                }
                break;
            case 4:
                if(completed[3] == 0) {
                    andromeda_scene();
                    strcpy(clues[clue_count], "HAVEN");
                    clue_count++;
                    completed[3] = 1;
                } else {
                    printf("\nYou've already examined this constellation.\n");
                    sleep(2);
                }
                break;
            default:
                printf("\nInvalid choice. Please enter a number between 1-4.\n");
                sleep(2);
        }
    }
}

// Final revelation scene
void final_reveal() {
    printf("\n\n========================================\n");
    sleep(2);
    printf("You've examined all four constellations.\n");
    sleep(2);
    printf("The clues glow brighter now...\n\n");
    sleep(3);
    
    printf("Collected clues: ");
    for(int i = 0; i < 4; i++) {
        printf("%s ", clues[i]);
        sleep(1);
    }
    printf("\n\n");
    sleep(3);
    
    printf("Suddenly, the diary grows warm in your hands.\n");
    sleep(2);
    printf("A final page begins to shimmer with brilliant light.\n\n");
    sleep(3);
    printf("Press Enter to turn to the final page...\n");
    wait_for_enter();
    
    printf("\n\n");
    printf("*:...:*:...:*:...:*:...:*:...:*:...:*:...:*\n");
    printf("         THE FINAL PAGE\n");
    printf("*:...:*:...:*:...:*:...:*:...:*:...:*:...:*\n\n");
    sleep(3);
    
    printf("'My dearest friend across the stars,\n\n");
    sleep(2);
    printf("If you're reading this, the war has ended.\n");
    sleep(3);
    printf("I couldn't risk writing direct coordinates in case this fell into the wrong hands.\n");
    sleep(3);
    printf("But I left you a trail through our constellations.\n");
    sleep(3);
    printf("\nThe four clues spell out where I'll be:\n\n");
    sleep(2);
    printf(">>> SECTOR SEVEN, DELTA HAVEN <<<\n\n");
    sleep(3);
    printf("It's a new settlement, built for those displaced by the war.\n");
    sleep(3);
    printf("A place of peace, finally.\n");
    sleep(3);
    printf("\nI'll wait as long as it takes.\n");
    sleep(3);
    printf("Look for the house with star lilies in the garden.\n");
    sleep(3);
    printf("\nOur friendship was written in the stars.\n");
    sleep(2);
    printf("Let them guide you home.'\n\n");
    sleep(3);
    printf("*:...:*:...:*:...:*:...:*:...:*:...:*:...:*\n\n");
    sleep(3);
    
    printf("You sit back, tears streaming down your face.\n");
    sleep(3);
    printf("Your grandmother never decoded this. She never knew her friend was waiting.\n");
    sleep(3);
    printf("\nBut now YOU do.\n\n");
    sleep(3);
    
    printf("What will you do with this information?\n\n");
    printf("1. Tell your family: maybe you can find them together\n");
    printf("2. Keep it secret for now: this feels too personal to share yet\n");
    printf("3. Plan to visit Delta Haven yourself someday\n");
    printf("\nYour choice: ");
    
    int ending_choice;
    scanf("%d", &ending_choice);
    getchar();
    
    printf("\n========================================\n");
    
    if(ending_choice == 1) {
        printf("\nYou gather your family and show them the diary.\n");
        sleep(3);
        printf("There are tears, hugs, and wonder at your grandmother's secret.\n");
        sleep(3);
        printf("Together, you make plans to travel to Delta Haven.\n");
        sleep(3);
        printf("This isn't just your grandmother's story anymore it's your family's.\n");
        sleep(3);
        printf("\nSome friendships transcend time, distance, and even death.\n");
        sleep(3);
        printf("And some mysteries are meant to be solved together.\n");
    }
    else if(ending_choice == 2) {
        printf("\nYou close the diary gently and hold it to your chest.\n");
        sleep(3);
        printf("This secret feels sacred, not yet ready to be shared.\n");
        sleep(3);
        printf("But you know that when the time is right, you'll follow the stars.\n");
        sleep(3);
        printf("Your grandmother's friend is waiting.\n");
        sleep(3);
        printf("\nSome journeys we must prepare for in our own time.\n");
    }
    else if(ending_choice == 3) {
        printf("\nYou carefully place the diary in your bag.\n");
        sleep(3);
        printf("This is YOUR quest now. A promise to finish what she started.\n");
        sleep(3);
        printf("Delta Haven. Sector Seven. A house with star lilies.\n");
        sleep(3);
        printf("Someday, you'll make that journey.\n");
        sleep(3);
        printf("\nThe stars have been waiting. So has someone at the end of their light.\n");
    }
    else {
        printf("\nYou sit with the diary, uncertain but moved.\n");
        sleep(3);
        printf("The weight of this discovery settles over you.\n");
        sleep(3);
        printf("Whatever you choose, the stars will remember.\n");
    }
    
    printf("\n\n========================================");
    printf("\n         THANK YOU FOR PLAYING");
    printf("\n========================================\n\n");
}

int main() {
    welcome_message();
    phase1();
    diary_open();
    
    printf("\nWhat do you do?\n");
    printf("1. Examine the constellations in the diary\n");
    printf("2. Close the diary and leave it be\n");
    printf("\nYour choice: ");
    
    int choice;
    scanf("%d", &choice);
    getchar();
    
    if(choice == 1) {
        printf("\nYou decide to examine the constellations in the diary.\n");
        sleep(2);
        printf("The pages seem to guide your hands...\n\n");
        sleep(2);
        constellation_menu();
        final_reveal();
    }
    else if(choice == 2) {
        printf("\nYou close the diary gently and place it back in the trunk.\n");
        sleep(2);
        printf("Some mysteries are better left unsolved...\n");
        sleep(2);
        printf("At least for now.\n");
        sleep(2);
        printf("\nBut the glow doesn't fade.\n");
        sleep(2);
        printf("The stars are patient.\n");
        sleep(2);
        printf("They'll wait for you to be ready.\n\n");
    }
    else {
        printf("\nInvalid choice. The diary closes on its own.\n");
        sleep(2);
        printf("Perhaps another time...\n");
    }
    
    return 0;
}