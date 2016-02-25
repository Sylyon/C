#ifndef _superScan_h
    #define _superScan_h

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <limits.h>
    #include <float.h>

    /** Capture du chaine de carract�re de mani�re securis�
     *
     * @param   str         La chaine de carract�re qui contiendra ce que l'utilisateur saisira.
     * @param   sizeOfStr   La taille maximal de la chaine de carract�re.
     * @return
     * @author  Sylyon
    **/
    void charScan(char *str,int sizeOfStr);

    /** Capture des int de mani�re securis�
     *
     * @param   val     Le int qui contiendra ce que l'utilisateur saisira.
     * @return
     * @author  Sylyon
    **/
    void intScan(int *val);

    /** Capture 1 carract�re de mani�re securis�
     *
     * @param   val     Le char qui contiendra ce que l'utilisateur saisira.
     * @return
     * @author  Sylyon
    **/
    void caractScan(char *val);

    /** Capture des doubles de mani�re securis�
     *
     * @param   val     Le double qui contiendra ce que l'utilisateur saisira.
     * @return
     * @author  Sylyon
    **/
    void doubleScan(double *val);


    /** Compte le numbre de digits
     *
     * @param   val     Le double dont on veux connaitre le nombre de digits
     * @return  rep     Le nombre de digits
     * @author  Sylyon
    **/
    int numberOfDigits(double val);


    /** Nettoie le buffer stdin
     *
     * @param
     * @return
     * @author  Sylyon
    **/
    void purge(void);

    /** Nettoie une chaine de carract�re (suppr�sion des \n) et le buffer stdin
     *
     * @param   chaine  La chaine de carract�re � nettoyer.
     * @return
     * @author  Sylyon
    **/
    void clean(char *chaine);

#endif // _superScan_h
