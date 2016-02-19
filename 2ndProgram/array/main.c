#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tableau.h"


int main()
{
    /*int tab[4]={1,2,33,5};
    int tab2[4]={0}; // tab2= [0,0,0,0]
    int tab3[6]={9,3,5,4,-12,-5};
    printf("somme = %d\n",sommeTableau(tab,4));
    printf("moyenne = %lf\n",moyenneTableau(tab,4));
    printf("avant copie tab2=");
    afficheTableau(tab2,4);
    copieTableau(tab,tab2,4);
    printf("\naprés copie tab2=");
    afficheTableau(tab2,4);
    printf("\nmaximalTableau(tab2,4,2) : ");
    maximalTableau(tab2,4,2);
    afficheTableau(tab2,4);
    printf("\ntab3 avant trie=");
    afficheTableau(tab3,6);
    printf("\ntab3 aprés trie=");
    ordonnerCroissantTableau(tab3,6);
    afficheTableau(tab3,6);*/

    char* suiteChaine;
    suiteChaine= strpbrk("Texte de test", "xsd");

    if (suiteChaine != NULL)
    {
        printf("Voici la fin de la chaine a partir du premier des caracteres trouves : %s", suiteChaine);
    }
    return 0;
}
