#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char plat1[]="Royal Cheese";
    char plat2[]="Mc Deluxe";
    char plat3[]="Mc Bacon";
    char plat4[]="Big Mac";

    int choixPlat;

    printf("=== Menu ===\n 1.%s\n 2.%s\n 3.%s\n 4.%s\n",plat1,plat2,plat3,plat4);
    printf("Votre choix ?");
    scanf("%d",&choixPlat);

    switch(choixPlat)
    {
    case 1:
        printf("Vous avez choisi: %s\n",plat1);
        break;
    case 2:
        printf("Vous avez choisi: %s\n",plat2);
        break;
    case 3:
        printf("Vous avez choisi: %s\n",plat3);
        break;
    case 4:
        printf("Vous avez choisi: %s\n",plat4);
        break;
    default:
        printf("Desoler ce choix n'est pas reconu\n");
        break;
    }

    int compteur = 20;
    int compteur2 = 20;

    do
    {
        compteur++;
        printf("Salut les Zeros ! %d\n",compteur);

    } while (compteur < 10);

    while (compteur2 < 10)
    {
        compteur2++;
        printf("Salut les Zros ! %d\n",compteur2);
    }
int compteur3;
    for (  compteur3 = 0 ; compteur3 < 10 ; compteur3++)
    {
        printf("Salut les sd !\n");
    }
    return 0;
}
