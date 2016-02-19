#include "tableau.h"

/**
 * Calcul la somme de tout les element d'un tableu de int
 *
 * @param   tableau        Le tableau dont on veut calculer la somme
 * @param   tailleTableau  La taille du tableau dont on veut calculer la somme
 * @return  sommeVal       La somme de tout les elements du tableau
 * @author  Sylyon
**/
int sommeTableau(int tableau[], int tailleTableau){
    int i=0;
    int sommeVal=0;
    for (i=0;i<tailleTableau;i++){
        sommeVal=sommeVal+tableau[i];
    }
    return sommeVal;
}

/**
 * Calcul la moyenne de tout les element d'un tableu de int
 *
 * @param   tableau        Le tableau dont on veut calculer la mayonne
 * @param   tailleTableau  La taille du tableau dont on veut calculer la moyenne
 * @return  moyenneVal     La moyenne de tout les elements du tableau
 * @author  Sylyon
**/
double moyenneTableau(int tableau[], int tailleTableau){
    double moyenneVal=0.0;
    moyenneVal = (double)sommeTableau(tableau,tailleTableau)/(double)tailleTableau;
    return moyenneVal;
}

/**
 * Copie de contenu d'un tableau dans un autre, !!! Les deux tableaux doivent avoir la même taille !!!
 *
 * @param   tableauOriginal  Le tableau dont on veut copier le contenu
 * @param   tableauCopie     Le tableau copie
 * @param   tailleTableau    La taille du tableau original et de la copie.
 * @return
 * @author  Sylyon
**/
void copieTableau(int tableauOriginal[], int tableauCopie[], int tailleTableau){
    int i=0;
    for (i=0;i<tailleTableau;i++){
        tableauCopie[i]=tableauOriginal[i];
    }
}

/**
 * Affiche le contenu d'un tableau de int sous la forme [1,3,4,5]
 *
 * @param   tableau         Le tableau dont on veut afficher le contenu
 * @param   tailleTableau   La taille du tableau .
 * @return
 * @author  Sylyon
**/
void afficheTableau(int tableau[], int tailleTableau){
    int i=0;
    printf("[");
    for (i=0;i<tailleTableau;i++){
        if (i == (tailleTableau-1)){
            printf("%d", tableau[i]);
        }
        else{
            printf("%d, ", tableau[i]);
        }
    }
    printf("]");
}

/**
 * Mes à 0 toutes les casses du tableau dont la valeur est supperieur strictement a une valeur max (valeurMax)
 *
 * @param   tableau         Le tableau dont on veut modifier le contenu
 * @param   tailleTableau   La taille du tableau .
 * @param   valeurMax       La valeur maximal souhaité
 * @return
 * @author  Sylyon
**/
void maximalTableau(int tableau[], int tailleTableau, int valeurMax){
    int i=0;
    for(i=0; i<tailleTableau;i++){
        if(tableau[i]>valeurMax){
            tableau[i] =0;
        }
    }
}

/**
 * Classe les valeur d'un tableau dans l'ordre croissant
 *
 * @param   tableau         Le tableau dont on veut ordonner les valeurs
 * @param   tailleTableau   La taille du tableau .
 * @return
 * @author  Sylyon
**/
void ordonnerCroissantTableau(int tableau[], int tailleTableau){
    int i=0;
    int j=0;
    int tmp=0;

    for(i=0;i<tailleTableau;i++){
        for(j=i;j<tailleTableau;j++){
            if(tableau[i]>tableau[j]){
                tmp=tableau[i];
                tableau[i]=tableau[j];
                tableau[j]=tmp;
            }
        }
    }
}
