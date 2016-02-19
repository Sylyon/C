#ifndef _tableau_h
    #define _tableau_h

    void function();

    #include <stdio.h>
    #include <stdlib.h>

    /**
     * Calcul la somme de tout les element d'un tableu de int
     *
     * @param   tableau        Le tableau dont on veut calculer la somme
     * @param   tailleTableau  La taille du tableau dont on veut calculer la somme
     * @return  sommeVal       La somme de tout les elements du tableau
     * @author  Sylyon
    **/
    int sommeTableau(int tableau[], int tailleTableau);

    /**
     * Calcul la moyenne de tout les element d'un tableu de int
     *
     * @param   tableau        Le tableau dont on veut calculer la mayonne
     * @param   tailleTableau  La taille du tableau dont on veut calculer la moyenne
     * @return  moyenneVal     La moyenne de tout les elements du tableau
     * @author  Sylyon
    **/
    double moyenneTableau(int tableau[], int tailleTableau);

    /**
     * Copie de contenu d'un tableau dans un autre, !!! Les deux tableaux doivent avoir la même taille !!!
     *
     * @param   tableauOriginal  Le tableau dont on veut copier le contenu
     * @param   tableauCopie     Le tableau copie
     * @param   tailleTableau    La taille du tableau original et de la copie.
     * @return
     * @author  Sylyon
    **/
    void copieTableau(int tableauOriginal[], int tableauCopie[], int tailleTableau);

    /**
     * Affiche le contenu d'un tableau de int sous la forme [1,3,4,5]
     *
     * @param   tableau         Le tableau dont on veut afficher le contenu
     * @param   tailleTableau   La taille du tableau .
     * @return
     * @author  Sylyon
    **/
    void afficheTableau(int tableau[], int tailleTableau);

    /**
     * Mes à 0 toutes les casses du tableau dont la valeur est supperieur strictement a une valeur max (valeurMax)
     *
     * @param   tableau         Le tableau dont on veut modifier le contenu
     * @param   tailleTableau   La taille du tableau .
     * @param   valeurMax       La valeur maximal souhaité
     * @return
     * @author  Sylyon
    **/
    void maximalTableau(int tableau[], int tailleTableau, int valeurMax);

    /**
     * Classe les valeur d'un tableau dans l'ordre croissant
     *
     * @param   tableau         Le tableau dont on veut ordonner les valeurs
     * @param   tailleTableau   La taille du tableau .
     * @return
     * @author  Sylyon
    **/
    void ordonnerCroissantTableau(int tableau[], int tailleTableau);

#endif //_tableau_h
