#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "superScan.h"

#define SIZE_OF_CHAR 100

void resolveWord(const char* motSecret,int sizeOfmotSecret, char*motUser, char lettreUser,int* contTours);
int numberOfLine(FILE* fichier);
int nombreAleatoire(int nombreMax);
long goToLigne(FILE* fichier, int ligneNum);
void maskWord(char* maskWord, const char* word, int wordSize, char mask);
int main()
{
    char* motSecret = NULL;
    char* motUser = NULL;
    int nbErreurMax = 10;
    motSecret=malloc(SIZE_OF_CHAR);
    motUser=malloc(SIZE_OF_CHAR);

    char lettreUser='1';
    int contErreurs=0;

    //--
    FILE* fichier = NULL;
    fichier = fopen("dictionary.txt", "r+");

    goToLigne(fichier,nombreAleatoire(numberOfLine(fichier)));
    fgets(motSecret,SIZE_OF_CHAR,fichier);
    clean(motSecret);
    maskWord(motUser,motSecret,SIZE_OF_CHAR,'*');
    fclose(fichier);
    //--
   printf("Bonjour et Bienvenue dans le jeu du Pendu !\n\n");
    while(strcmp(motSecret,motUser) && contErreurs<nbErreurMax){
        printf("Vous avez fait %d erreurs (max %d)\n",contErreurs,nbErreurMax);
        printf("Quel est le mot secret ? %s\n",motUser);
        printf("Proposez une lettre :");
        caractScan(&lettreUser);
        lettreUser=toupper(lettreUser);
        resolveWord(motSecret,SIZE_OF_CHAR,motUser,lettreUser,&contErreurs);
        printf("\n");
    }

    //--
    if(!strcmp(motSecret,motUser)){
        printf("\nBravo vous avez trouvé le mot secret: %s en faisant %d erreurs\n",motSecret,contErreurs);
    }
    else{
        printf("\nPerdu le mots recherche etait: %s\n",motSecret);
    }

    return 0;
}

void maskWord(char* maskWord, const char* word, int wordSize, char mask){
    int i=0;
    for (i=0;i<wordSize;i++){
        if(word[i]=='\0' || i==(wordSize-1)){
            maskWord[i]='\0';
            break;
        }
        else{
            maskWord[i]=mask;
        }
    }
}

int nombreAleatoire(int nombreMax){
    srand(time(NULL));
    return (rand() % nombreMax);
}

int numberOfLine(FILE* fichier){
    int c=0;
    int nb_line = 0;

    rewind(fichier);

    if (fichier != NULL)
    {
        while ((c = getc(fichier)) != EOF){
            if (c == '\n')
                ++nb_line;
        }
        rewind(fichier);
        ++nb_line;
    }

    return nb_line;
}

long goToLigne(FILE* fichier, int ligneNum){
    int cont_ligne = 1;
    long pointeurPlace=0;
    int c=0;
    rewind(fichier);
    while ((c = getc(fichier)) != EOF){
        if (c == '\n'){
            ++cont_ligne;
            if(cont_ligne>=ligneNum){
                pointeurPlace=ftell(fichier);
                break;
            }
        }

    }
    return pointeurPlace;
}

void resolveWord(const char* motSecret,int sizeOfmotSecret, char* motUser, char lettreUser, int* contErreurs){
    int i=0;
    int find=0; // Boolean valant 0 si la lettre n'est pas dans le mots et 1 si oui.
    for (i=0;i<(sizeOfmotSecret-1);i++){
        if(motSecret[i]=='\0'){
            break;
        }
        else if (motSecret[i]==lettreUser){
            motUser[i]=lettreUser;
            find=1;
        }
    }
    if(!find){
        *contErreurs=*contErreurs+1;
    }


}
