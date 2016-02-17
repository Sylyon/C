#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Difficulte(){
    /* Programme qui permet de selectionner le niveau du jeu
    */
    int difficulte=0;

    do{
        printf("Choissisez une difficulte entre 1 et 3: \n");
        printf("1. le nombre sera tire au hasard entre 1 et 100 \n");
        printf("2. le nombre sera tire au hasard entre 1 et 1000 \n");
        printf("3. le nombre sera tire au hasard entre 1 et 10000 \n");

        scanf("%d",&difficulte);
        printf("\n");

    }while(!(difficulte>0&&difficulte<4));
    int MAX = pow(10,difficulte+1);
    return MAX;

}



int main()
{
    srand(time(NULL));
    int nbreADeviner = 0;
    int MIN = 0;
    int recommencer = 1;

    do{
        int MAX = Difficulte();

        printf("===============================================\n");
        printf("Bienvenue dans ce superbe jeu : plus ou moins\n");
        printf("===============================================\n");
        nbreADeviner=(rand()%(MAX-MIN+1))+MIN;
        printf("\nLe nombre que vous devez deviner vient d'etre choisi au hasard\n\n");
        int i=1;//compteur du nombre de coups
        int nbreRentre = 0;
        printf("Premier essai, quel est le nombre ?\n");
        scanf("%d",&nbreRentre);
        while(nbreADeviner!=nbreRentre){
            i++;
            if(nbreADeviner>nbreRentre)
            {
                printf("c'est plus !\n");
            }
            else{
                printf("c'est moins !\n");
            }

            printf("%d eme essais, quel est le nombre ?\n", i);
            scanf("%d",&nbreRentre);


        }
        printf("===============================================\n");
        printf("Felicitations, le nombre a deviner etait %d\n", nbreADeviner);
        printf("Vous l'avait trouve en %d coups\n",i);
        printf("===============================================\n\n\n\n");

        printf("Voulez vous recommencer ? (oui = 1, non = 0)");
        scanf("%d",&recommencer);
    }while(recommencer==1);

    return 0;
}
