#include <SDL2/SDL.h>
#include <iostream>
#include "flying_rect.h"

const int FPS = 30;
const int frameDelay = 1000 / FPS;

Uint32 frameStart;
int frameTime;

int main(){
    SDL_Window *window;
    SDL_Event event;
    SDL_Renderer *renderer;

    window=SDL_CreateWindow("Window", SDL_WINDOWPOS_CENTERED,
                            SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_OPENGL);

    renderer = SDL_CreateRenderer(window, -1, 0);

    Rectn rct =  Rectn(WIDTH / 2,HEIGHT / 2,120,30);

    while(window!=NULL){
        frameStart = SDL_GetTicks();
        while(SDL_PollEvent(&event)){
            if(event.type==SDL_QUIT)
                window = NULL;
            if(event.key.keysym.scancode==SDL_SCANCODE_ESCAPE)
                window = NULL;
            if(event.key.keysym.sym)
            {
                rct.moving(event);
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
        SDL_RenderClear(renderer);
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
        rct.draw(renderer);
        SDL_RenderPresent(renderer);
        rct.cutSize();

        frameStart = SDL_GetTicks() - frameStart;
        if (frameDelay > frameTime){
            SDL_Delay(frameDelay - frameTime);
        }
    }
}

//set(SDL2_IMAGE_PATH "/Library/Frameworks/SDL2_image.framework")
//find_package(SDL2_image REQUIRED)
//include_directories( ${SDL2_IMAGE_INCLUDE_DIR})
//
//
//
//set(SDL2_TTF_PATH "/Library/Frameworks/SDL2_ttf.framework")
//find_package(SDL2_ttf REQUIRED)
//include_directories( ${SDL2_TTF_INCLUDE_DIR})