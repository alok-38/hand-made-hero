#include <SDL3/SDL.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        const char *error = SDL_GetError();
        printf("SDL_Init failed: %s\n", error ? error : "Unknown error");
        return 1;
    }
    printf("SDL_Init succeeded!\n");
    SDL_Quit();
    return 0;
}
