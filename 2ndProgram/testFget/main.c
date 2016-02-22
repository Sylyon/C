#include <stdio.h>
#include <string.h>

static void purger(void)
{
    int c;

    while ((c = getchar()) != '\n' && c != EOF)
    {}
}

static void clean (char *chaine)
{
    printf("chaine = %s, size of chaine = %d",chaine,sizeof chaine);
    fgets(chaine, sizeof &chaine, stdin);
    char *p = strchr(chaine, '\n');

    if (p)
    {
        *p = 0;
    }

    else
    {
        purger();
    }
}

int main (void)
{
    char chaine[20]="azertyuio", chaine2[20]="";

    printf("Tapez une phrase : \n");
    printf("chaine = %s, size of chaine = %d",chaine,sizeof chaine);
    clean(chaine);
    printf("Vous avez tape : '%s'", chaine);

    printf("Tapez une phrase : \n");
    clean(chaine2);
    printf("Vous avez tape : '%s'", chaine2);

    return 0;
}
