#include "superScan.h"

void charScan(char *str, int sizeOfStr){
    /* On recurère ce que l'utilisateur saisit */
    fgets(str, sizeOfStr, stdin);
    /* On nettoit la chioane de carractère */
    clean(str);

}

void intScan(int *val){
    /* On crée un char de taille la taille maximal du plus grand des int : INT_MAX = */
    char valChar[sizeof INT_MAX];
    charScan(valChar,sizeof valChar);
    sscanf(valChar, "%d", val);
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
    /* On stop notre chaine de carractère au 1er \n trouver */
    if (p)
    {
        *p = 0;
    }
    /* Si ce que l'utilisateur a rentré est trop long, on nettoit le buffer stdin */
    else
    {
        purge();
    }
}


