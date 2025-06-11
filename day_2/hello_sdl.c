#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

int main(int argc, char **argv)
{
    // Initialize SDL's video subsystem
    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        SDL_Log("SDL_Init failed: %s\n", SDL_GetError());
        return 1;
    }

    // Create an SDL3 window
    SDL_Window *window = SDL_CreateWindow("Hello SDL3!", 640, 480, 0);
    if (!window)
    {
        SDL_Log("SDL_CreateWindow failed: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // Event loop: wait until the user closes the window
    SDL_Event event;
    int running = 1;
    while (running)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT)
            {
                running = 0;
            }
        }
        // You can add rendering here if needed
    }

    // Clean up
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
