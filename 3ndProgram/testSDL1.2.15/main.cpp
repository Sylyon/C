#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
void pause();
int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL;
    SDL_Surface* degradee[256]={NULL};

    SDL_Rect position;

    SDL_Init(SDL_INIT_VIDEO);

    ecran = SDL_SetVideoMode(640, 256, 32, SDL_HWSURFACE);
    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 17, 206, 112));


    int i=0;
     // Allocation de la surface
    for (i=0; i<256; i++){
        degradee[i] = SDL_CreateRGBSurface(SDL_HWSURFACE, 640, 1, 32, 0, 0, 0, 0);

    }
        position.x=0;
        position.y=0;
    for (i=0; i<256; i++){

        // Remplissage de la surface
        SDL_FillRect(degradee[i], NULL, SDL_MapRGB(ecran->format, i, i, i));
        SDL_BlitSurface(degradee[i], NULL, ecran, &position); // Collage de la surface sur l'écran
        position.y=position.y+1;
    }
    SDL_Flip(ecran); // Mise à jour de l'écran

    pause();
    for (i=0; i<256 ;i++){
        SDL_FreeSurface(degradee[i]); // Libération de la surface
    }
    SDL_Quit();

    return EXIT_SUCCESS;
}

void pause()
{
    int continuer = 1;
    SDL_Event event;

    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
        }
    }
}
