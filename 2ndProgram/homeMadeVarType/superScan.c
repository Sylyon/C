#include "superScan.h"

void charScan(char *str, int sizeOfStr){
    /* On recur�re ce que l'utilisateur saisit */
    fgets(str, sizeOfStr, stdin);
    /* On nettoit la chioane de carract�re */
    clean(str);

}

void intScan(int *val){
    /* On cr�e un char de taille la taille maximal du plus grand des int : INT_MAX = */
    char* valChar = NULL;
    int sizeValChar = sizeof(char)*numberOfDigits((double)INT_MAX)+1;
    valChar = malloc(sizeValChar); // On alloue de la m�moire pour le tableau
    if (valChar == NULL) // On v�rifie si l'allocation a march� ou non
    {
        exit(0); // On arr�te tout
    }
    else{
        charScan(valChar,sizeValChar);
        sscanf(valChar, "%d", val);
        free(valChar);
    }
}



void doubleScan(double *val){
    /* On cr�e un char de taille la taille maximal du plus grand des int : INT_MAX = */
    char* valChar = NULL;
    int sizeValChar = sizeof(char)*numberOfDigits((double)DBL_MAX)+2;
    valChar = malloc(31); // On alloue de la m�moire pour le tableau
    if (valChar == NULL) // On v�rifie si l'allocation a march� ou non
    {
        exit(0); // On arr�te tout
    }
    else{
        charScan(valChar,sizeValChar);
        sscanf(valChar, "%lf", val);
        free(valChar);
    }

}

int numberOfDigits(double val){
    int rep = 1;
    while (val>=10)
    {
        val = val/10.0;
        rep=rep+1;
    }
    return rep;
}


void purge(void)
{
    int c;
    /* On lit tout le buffer stdin afin de le vider*/
    while ((c = getchar()) != '\n' && c != EOF)
    {}
}

void clean(char *chaine)
{
    char *p = strchr(chaine, '\n');
    /* On stop notre chaine de carract�re au 1er \n trouver */
    if (p)
    {
        *p = 0;
    }
    /* Si ce que l'utilisateur a rentr� est trop long, on nettoit le buffer stdin */
    else
    {
        purge();
    }
}


