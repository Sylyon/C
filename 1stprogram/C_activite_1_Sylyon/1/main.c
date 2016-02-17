#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nombreMystere=0, nombre=0, compteur=1, niveaux, nombremax, jouer=1;
    const int MIN=1;

 srand(time(NULL));


printf("====Choix du niveaux=====\n\n");
printf("  1. Debutant \n");
printf("  2. intermediaire\n");
printf ("  3. Difficile\n");
printf ("   Votre Choix?\n");
scanf("%d", &niveaux);

switch (niveaux)
{
  case 1 :
    nombremax=100;
    break;

  case 2 :
    nombremax =500;
    break;

  case 3 :
    nombremax=1000;
    break;

  default:
    printf("Je n'est pas compris");
}

nombreMystere=(rand()%(nombremax-MIN+1))+MIN;

do
{
printf("Quel est votre nombre?\n");
scanf("%d", &nombre);

if (nombre>nombreMystere)

    printf("C'est moins \n");

else if (nombre<nombreMystere)


    printf("c'est plus\n");

else


    printf("Bravo vous avez trouvee le chiffre mystere en %d coup\n", compteur);
    compteur++;

    }
     while( nombre !=nombreMystere);
    return 0;

    }
