#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>


int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *zozor = NULL;
    SDL_Rect positionZozor;
    SDL_Event event;
    int continuer = 1;

    SDL_Init(SDL_INIT_VIDEO);

    ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    SDL_WM_SetCaption("Gestion des �v�nements en SDL", NULL);

    /* Chargement de Zozor */
    zozor = SDL_LoadBMP("images/zozor.bmp");
    SDL_SetColorKey(zozor, SDL_SRCCOLORKEY, SDL_MapRGB(zozor->format, 0, 0, 255));

    /* On centre Zozor � l'�cran */
    positionZozor.x = ecran->w / 2 - zozor->w / 2;
    positionZozor.y = ecran->h / 2 - zozor->h / 2;
    SDL_EnableKeyRepeat(10, 10);
    int toto=0;
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
            case SDL_MOUSEBUTTONUP:
                if (event.button.button == SDL_BUTTON_RIGHT) /* On arr�te le programme si on a fait un clic droit */
                    continuer = 0;
                else if (event.button.button == SDL_BUTTON_LEFT){
                    positionZozor.x=event.button.x-zozor->w / 2;
                    positionZozor.y=event.button.y-zozor->h / 2;
                    toto=0;
                }
                break;
            case SDL_MOUSEBUTTONDOWN:
                if (event.button.button == SDL_BUTTON_LEFT){
                    positionZozor.x=event.button.x-zozor->w / 2;
                    positionZozor.y=event.button.y-zozor->h / 2;
                    toto=1;
                }
                break;
            case SDL_MOUSEMOTION:
                if(toto==1){
                    positionZozor.x = event.motion.x-zozor->w / 2;
                    positionZozor.y = event.motion.y-zozor->w / 2;
                }
                break;
            case SDL_KEYDOWN:
                switch(event.key.keysym.sym)
                {
                    case SDLK_UP: // Fl�che haut
                        positionZozor.y--;
                        break;
                    case SDLK_DOWN: // Fl�che bas
                        positionZozor.y++;
                        break;
                    case SDLK_RIGHT: // Fl�che droite
                        positionZozor.x++;
                        break;
                    case SDLK_LEFT: // Fl�che gauche
                        positionZozor.x--;
                        break;
                }
                break;
        }

        /* On efface l'�cran */
        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
        /* On place Zozor � sa nouvelle position */
        SDL_BlitSurface(zozor, NULL, ecran, &positionZozor);
        /* On met � jour l'affichage */
        SDL_Flip(ecran);
    }

    SDL_FreeSurface(zozor);
    SDL_Quit();

    return EXIT_SUCCESS;
}
