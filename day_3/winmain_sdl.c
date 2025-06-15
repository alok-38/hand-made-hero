#define SDL_MAIN_HANDLED
#include <windows.h>
#include <SDL3/SDL.h>
#include <stdio.h>

void LogError(const char *message)
{
    FILE *f = fopen("sdl_error.txt", "w");
    if (f)
    {
        fprintf(f, "%s: %s\n", message, SDL_GetError());
        fclose(f);
    }
    MessageBoxA(NULL, SDL_GetError(), message, MB_OK | MB_ICONERROR);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        LogError("SDL_Init failed");
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow("WinMain SDL", 800, 600, SDL_WINDOW_OPENGL);
    if (!window)
    {
        LogError("SDL_CreateWindow failed");
        SDL_Quit();
        return 1;
    }

    SDL_Delay(3000);

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
