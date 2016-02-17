#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	//Constante
	const MIN = 1;

	//Variable
	int max = 100;
	int nombre_mystere = 0;
	int nombre_teste = 0;
	int compteur_tentatives = 0;
	int continuer_partie = 1;
	int niveau = 0;
	int nombre_joueur = 0;

	//Règles du jeu
	printf("Bonjour, le jeu de Plus ou Moins est un jeu dans lequel vous devez devinez un nombre compris dans un interval donne (exemple : entre 1 et 100)\n\n");
	printf("Pour cela vous aurez la possibilité de choisir entre 3 niveaux de difficulte et vous devrez aussi choisir si vous joue contre un ami ou contre l'ordinateur.\n\n");

	while (continuer_partie)
	{

		//Choix de la difficulté
		printf("Choisissez d'abord le niveau :\n\n");
		printf("1 : Trouver un nombre entre 1 et 100\n");
		printf("2 : Trouver un nombre entre 1 et 1 000\n");
		printf("3 : Trouver un nombre entre 1 et 10 000\n");

		do
		{
			scanf_s("%d", &niveau);

			if (niveau != 1 && niveau != 2 && niveau != 3)
			{
				printf("Veuillez ecrire un numero de niveau correct : ");
			}
		} while (niveau != 1 && niveau != 2 && niveau != 3);

		switch (niveau)
		{
		case 1:
			//Facile (entre 1 et 100)
			max = 100;
			break;
		case 2:
			//Moyen (entre 1 et 1 000)
			max = 1000;
			break;
		case 3:
			//Moyen (entre 1 et 10 000)
			max = 10000;
			break;
		default:
			break;
		}

		//Choix du nombre de joueur
		printf("*** Nombre de joueurs ***\n\n");
		printf("1: 1 joueur\n");
		printf("2: 2 joueur\n");

		do
		{
			scanf_s("%d", &nombre_joueur);

			if (nombre_joueur != 1 && nombre_joueur != 2)
			{
				printf("Veuillez ecrire 1 ou 2 selon le nombre de joueurs que vous etes : ");
			}
		} while (nombre_joueur != 1 && nombre_joueur != 2);


		switch (nombre_joueur)
		{
		case 1:
			//Mode solo
			printf("Le programme genere un nombre aleatoire entre %d et %d, a vous de le deviner.\n\n", MIN, max);
			printf("Pour cela, vous ferez des propositions, et le programme vous dira si le nombre a deviner est plus petit ou plus grand.\n\n");

			srand(time(NULL));
			nombre_mystere = (rand() % (max - MIN + 1)) + MIN;
			compteur_tentatives = 0;

			do
			{
				printf("Quel est le nombre ? ");

				scanf_s("%d", &nombre_teste);

				if (nombre_teste >= MIN && nombre_teste <= max)
				{
					compteur_tentatives++;

					if (nombre_teste > nombre_mystere)
					{
						printf("C'est moins !\n");
					}
					else if (nombre_teste < nombre_mystere)
					{
						printf("C'est plus !\n");
					}
					else
					{
						printf("Bravo, vous avez trouve le nombre mystere en %d tentatives!!!\n\n", compteur_tentatives);
					}
				}
				else
				{
					printf("Vous devez ecrire un nombre compris entre %d et %d !\n", MIN, max);
				}
			} while (nombre_teste != nombre_mystere);

			break;

		case 2:
			//Mode duo
			printf("Le joueur 1 doit ecrire un nombre entre %d et %d, et le joueur 2 devra le deviner.\n\n", MIN, max);
			printf("Pour cela, le joueur 2 fera des propositions, et le programme vous dira si le nombre a deviner est plus petit ou plus grand.\n\n");

			printf("Joueur 1, veuillez ecrire un nombre entre %d et %d : ", MIN, max);
			scanf_s("%d", &nombre_mystere);

			compteur_tentatives = 0;

			do
			{
				printf("Joueur 2, quel est le nombre ? ");

				scanf_s("%d", &nombre_teste);

				if (nombre_teste >= MIN && nombre_teste <= max)
				{
					compteur_tentatives++;

					if (nombre_teste > nombre_mystere)
					{
						printf("C'est moins !\n");
					}
					else if (nombre_teste < nombre_mystere)
					{
						printf("C'est plus !\n");
					}
					else
					{
						printf("Bravo, vous avez trouve le nombre mystere en %d tentatives!!!\n\n", compteur_tentatives);						
					}
				}
				else
				{
					printf("Vous devez ecrire un nombre compris entre %d et %d !\n", MIN, max);
				}
			} while (nombre_teste != nombre_mystere);
			break;

		default:
			break;
		}

		//Recommencer ou pas
		do
		{
			printf("Voulez-vous refaire une partie ?\n");
			printf("0: Non	1: Oui\n");

			scanf_s("%d", &continuer_partie);

			if (continuer_partie != 0 && continuer_partie != 1)
			{
				printf("Ce nombre ne correspond a rien, veuillez ecrire 0 ou 1 !\n\n");
			}
		} while (continuer_partie != 0 && continuer_partie != 1);
		
	}	
	return 0;
}
