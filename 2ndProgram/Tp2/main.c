#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "superScan.h"

void resolveWord(const char* motSecret,int sizeOfmotSecret, char*motUser, char lettreUser,int* contTours);
int main()
{
    char motSecret[] = "MARRON";
    char motUser[]= "******";
    char lettreUser='1';
    int contTours=10;

    printf("Bonjour et Bienvenue dans le jeu du Pendu !\n\n");
    while(strcmp(motSecret,motUser) && contTours>0){
        printf("Il vous reste %d coups a jouer\n",contTours);
        printf("Quel est le mot secret ? %s\n",motUser);
        printf("Proposez une lettre :");
        caractScan(&lettreUser);
        lettreUser=toupper(lettreUser);
        resolveWord(motSecret,sizeof motSecret,motUser,lettreUser,&contTours);
    }
    if(!strcmp(motSecret,motUser)){
        printf("Bravo vous avez trouvé le mot secret: %s en %d tours\n",motSecret,(10-contTours+1));
    }
    else{
        printf("Perdu le mots recherche etait: %s\n",motSecret);
    }

    return 0;
}


void resolveWord(const char* motSecret,int sizeOfmotSecret, char* motUser, char lettreUser, int* contTours){
    int i=0;
    int find=0; // Boolean valant 0 si la lettre n'est pas dans le mots et 1 si oui.
    for (i=0;i<(sizeOfmotSecret-1);i++){
        if (motSecret[i]==lettreUser){
            motUser[i]=lettreUser;
            find=1;
        }
    }
    if(!find){
        *contTours=*contTours-1;
    }


}
