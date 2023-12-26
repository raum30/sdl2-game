#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

typedef struct
{
    int x, y;
    short life;
    char *name;
} Man;

int main(void)
{
    SDL_Window *window;
    SDL_Renderer *renderer;

    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow("Game Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

    // clear the screen (to blue)
    SDL_RenderClear(renderer);

    // set the drawing colour to white
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    SDL_Rect rect = {220, 144, 200, 200};
    SDL_RenderFillRect(renderer, &rect);

    // drawing finished, "present" or show to the screen what has been drawn
    SDL_RenderPresent(renderer);

    // wait a few seconds before quitting
    bool isquit = false;
    SDL_Event event;
    while (!isquit)
    {
        if (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                isquit = true;
            }
        }
    }

    // quit SDL
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();

    return 0;
}
