#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
/**
 * Demande le lvl de difficulté return la valeur max équivalente
 *
 * @param
 * @return         La valeur maximal des nombre possible
 * @author  Sylyon
**/

int initLevel()
{
    int lvl =1;
    int difficulte =0;

    printf("Choisissez votre niveau de difficulté ?\n");
    printf(" 0 Esay (valeur max = 10) \n 1 Normal (valeur max = 100) \n 2 Hard (valeur max = 1 000) \n 3 VeryHard (valeur max = 10 000) \n");
    scanf("%d",&lvl);
    printf("----------------------------\n\n");
    difficulte = lvl%4;

    return pow(10,(difficulte+1));
}

int main()
{
    printf("=== Le Jeu du Plus ou Moins ===\n\n");
    printf("Viens jouer avec moi\n Rentre un nombre et tente de trouver le nombre mister \n\n");

    srand(time(NULL));

    const int MIN=1;
    int myNomber, nombreMystere, replay, contTours;
    char rep[] = "non";

    while(replay)
    {
        int nombreMaxi=initLevel();
        myNomber = 0, nombreMystere=0, replay=2, contTours=0;

        nombreMystere = (rand() % (nombreMaxi - MIN + 1)) + MIN;

        while(myNomber!=nombreMystere)
        {
            printf("Quel est le nombre ?\n");
            scanf("%d",&myNomber);

            contTours++;

            if(myNomber>nombreMystere)
            {
                printf("C'est moins \n");
            }
            else if(myNomber<nombreMystere)
            {
                printf("C'est plus \n");
            }
            else
            {
                printf("!!! Bravo c'est gagner en %d coups !!! \n",contTours);
            }

            printf("\n");
        }

        while(replay ==2)
        {
            printf("On refait une partie ?");
            printf("oui (o) | non (n)\n");
            scanf("%s",&rep);

            if(!strcmp(rep,"o") || !strcmp(rep,"oui") || !strcmp(rep,"y") || !strcmp(rep,"yes"))
            {
                replay = 1;
                printf("----------------------------\n");
                printf("----------------------------\n\n");
            }
            else if(!strcmp(rep,"n") || !strcmp(rep,"no") || !strcmp(rep,"non"))
            {
                replay = 0;
                printf("----------------------------\n");
                printf("----------------------------\n\n");
            }
            else
            {
                printf("%s est reponce inconu \n\n",rep);
            }
        }

    }
    printf("\n\nMerci d'avoir jouer\n");
    printf("Rentrez n'importe quel touche pour fermer la console\n");
    scanf("%s",&rep);
    return 0;
}
