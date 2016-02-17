#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    srand(time(NULL));

    const int MIN=1, MAX=100;
    int myNomber = 0, nombreMystere=0, replay=2;
    char rep[] = "non";

    printf("=== Le Jeu du Plus ou Moins ===\n\n");
    printf("Viens jouer avec moi\n Rentre un nombre et tente de trouver le nombre mister \n\n");

    while(replay)
    {
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        while(myNomber!=nombreMystere)
        {
            printf("Quel est le nombre ?\n");
            scanf("%d",&myNomber);
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
                printf("!!! Bravo c'est gagner !!! \n");
            }
            printf("\n");
        }

        replay=2;
        while(replay ==2)
        {
            printf("On refait une partie ?");
            printf("oui (o) | non (n)");
            scanf("%s",&rep);
            if(!strcmp(rep,"o") || !strcmp(rep,"oui") || !strcmp(rep,"y") || !strcmp(rep,"yes"))
            {
                replay = 1;
            }
            else if(!strcmp(rep,"n") || !strcmp(rep,"no") || !strcmp(rep,"non"))
            {
                replay = 0;
            }
            else
            {
                printf("%s est reponce inconu \n\n",rep);
            }
        }

    }
    printf("\n\n Merci d'avoir jouer");
    printf("Rentrez n'importe quel touche pour fermer la console");
    scanf("%s",&rep);
    return 0;
}
