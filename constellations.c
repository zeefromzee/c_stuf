#include<stdio.h>
#include<string.h>


int main()
{
        printf("==================Welcome to the Constellation Program==================\n");
    printf("Here, you can learn about various constellations in the night sky!\n");
    char *constellation[300]={"orion", "ursa major", "cassiopeia", "cygnus"};
    char description[300][500]={
        "- Orion is one of the most recognizable constellations, known for its bright stars Betelgeuse and Rigel.",
        "- Ursa Major, also known as the Great Bear, contains the famous Big Dipper asterism.",
        "- Cassiopeia is easily identified by its distinctive 'W' shape formed by five bright stars.",
        "- Cygnus, the Swan, is home to the bright star Deneb and the beautiful Northern Cross asterism."};

    printf("what constellation would you like to learn about:  ");
    char input[50];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;  // Remove newline
    if(strcmp(input, constellation[0])==0)
    {
        
        printf("-----------------Here's a simple representation of Orion:---------------\n");
        printf("\n");
        printf("      *  *     \n");
        printf("        *   \n");   
        printf("    *     \n");
        printf("     *          *              *\n");
        printf("           *      *              *\n");
        printf("        *           *    *   *   *\n");
        printf("                   *             *\n");
        printf("          *                   *\n");
        printf("            *   *    \n");
        printf("              * *  \n");
        printf("             *    \n");
        printf("                  *\n");
        printf("           *        \n");
        printf("                    *\n");
        printf("          *   *   *  *\n");
        printf("\n");
        printf("--------------------------Some facts about Orion:-----------------------\n");
        printf("%s\n", description[0]);
        printf("- Orion is often associated with Greek mythology as a great hunter.\n");
        printf("- It is best visible during the winter months in the Northern Hemisphere.\n");
    }
    else if(strcmp(input, constellation[1])==0)
    {
        printf("---------------Here's a simple representation of Ursa Major:-------------\n");
        printf(" \n");
        printf("        *       *   \n");
        printf("                         \n");
        printf("                      *       \n");
        printf("\n");
        printf("                         *   \n");   
        printf("                                 \n");
        printf("                             * \n");
        printf("                                      *   \n");
        printf("                                                * \n");
        printf("                              *                         *\n");
        printf("                                                       \n");
        printf("                               *                      *\n");
        printf("                                         *                \n");
        printf("                                                   *  \n");
        printf("\n");
        printf("-------------------------Some facts about Ursa Major:----------------------\n");
        printf("- Ursa Major is one of the largest constellations in the night sky.\n");
        printf("- The Big Dipper asterism is part of Ursa Major and is often used for navigation.\n");
        printf("%s\n", description[1]);

    }
    else if(strcmp(input, constellation[2])==0)
    {
        printf("-----------------Here's a simple representation of cassiopeia:---------------\n");
        printf("\n");
        printf("      *       \n");
        printf("         *   \n");   
        printf("                       \n");
        printf("             *       *                  *\n");
        printf("                            \n");
        printf("                              *      *\n");
        printf("                                  *\n");
        printf("\n");
        printf("--------------------------Some facts about cassiopeia:-----------------------\n");
        printf("%s\n", description[2]);
        printf("- Cassiopeia is named after a vain queen in Greek mythology.\n");
        printf("- It is visible year-round in the Northern Hemisphere.\n");
        
    }
    else if(strcmp(input, constellation[3])==0)
    {
        printf("-----------------Here's a simple representation of cygnus:---------------\n");
        printf("\n");
        printf("                                                                   *\n");
        printf("                                                                  *\n");        
        printf("                                      *                          \n");
        printf("    *                                             *\n");
        printf("            *                          *\n");
        printf("                         *\n");
        printf("                                                       \n");
        printf("                                              *\n");
        printf("\n");
        printf("                                                   *\n");
        printf("\n");
        printf("                                                        *\n");
        printf("--------------------------Some facts about cygnus:-----------------------\n");
        printf("- Cygnus is often depicted as a swan in mythology.\n");
        printf("- The Northern Cross asterism is part of Cygnus.\n");
        printf("- Deneb, one of the brightest stars in the night sky, is located in Cygnus.\n");
        printf("%s\n", description[3]);
    }
    else
    {
        printf("Sorry, information on that constellation is not available.\n");
    }

}
