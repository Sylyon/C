#ifndef _superScan_h
    #define _superScan_h

    #include <stdio.h>
    #include <string.h>
    #include <limits.h>


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
