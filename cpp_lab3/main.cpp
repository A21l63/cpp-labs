#include "includeLibs.h"
#include "ConfigAnalyser.h"
#include "Menu.h"
#include "MenuInit.h"

const int FPS = 30;
const int frameDelay = 1000 / FPS;

Uint32 frameStart;
int frameTime;

int main( int argc, char *argv[]) {
    TTF_Init();

    ConfigAnalyser cfg = ConfigAnalyser(argv[1]);
    cfg.analyse();

    SDL_Window *window;
    SDL_Event event;
    SDL_Renderer *renderer;

    TTF_Font* font = TTF_OpenFont("resources/fonk.ttf", 50);

    window=SDL_CreateWindow("Window", SDL_WINDOWPOS_CENTERED,
                            SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_OPENGL);

    renderer = SDL_CreateRenderer(window, -1, 0);

    std::vector<Menu> menu = MenuInit::menuInit(cfg.getMain(), cfg.getPop(), cfg.getDial(), font, renderer);

    menuPainter painter = menuPainter(menu);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    int xPos = 0;
    int yPos = 0;

    while(window!=NULL){
        frameStart = SDL_GetTicks();

        SDL_RenderClear(renderer);
        SDL_PollEvent(&event);

        SDL_GetMouseState(&xPos, &yPos);
        painter.paint(xPos, yPos, renderer, event);

        if (painter.getCurr() == 3)
        {
            window = NULL;
        }

        SDL_RenderPresent(renderer);

        frameStart = SDL_GetTicks() - frameStart;
        if (frameDelay > frameTime){
            SDL_Delay(frameDelay - frameTime);
        }
        if(event.type==SDL_QUIT)
            window = NULL;
    }
}
    /*
    SDL_Window *window;
    SDL_Event event;
    SDL_Renderer *renderer;

      //цикл
        while(SDL_PollEvent(&event)){

            if(event.key.keysym.scancode==SDL_SCANCODE_ESCAPE)
                window = NULL;
            if(event.key.keysym.sym)
            {
                if
            }
        }

    TTF_Font* font;

    TTF_Init();

    if (!Sans)
    {
        std::cout << "Failed to load font: " << TTF_GetError() << std::endl;
    }

    SDL_Color White = {255, 255, 255, 255};
    SDL_Surface* surfaceMessage = TTF_RenderText_Solid(Sans, "GOVNO", White);
    if (surfaceMessage == nullptr){
        TTF_CloseFont(font);
        std::cout << "Failed to load font: " << TTF_GetError() << std::endl;
        return -1;
    }

    SDL_Texture* Message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);

    SDL_Rect Message_rect; //create a rect
    Message_rect.x = 0;  //controls the rect's x coordinate
    Message_rect.y = 0; // controls the rect's y coordinte
    Message_rect.w = 100; // controls the width of the rect
    Message_rect.h = 100; // controls the height of the rect


    window=SDL_CreateWindow("Window", SDL_WINDOWPOS_CENTERED,
                            SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_OPENGL);

    renderer = SDL_CreateRenderer(window, -1, 0);

    const SDL_Rect rect = {150, 150, 400, 400};

    while(window!=NULL){
        frameStart = SDL_GetTicks();
        while(SDL_PollEvent(&event)){
            if(event.type==SDL_QUIT)
                window = NULL;
            if(event.key.keysym.scancode==SDL_SCANCODE_ESCAPE)
                window = NULL;
            if(event.key.keysym.sym)
            {
            }
        }
        SDL_RenderClear(renderer);

        SDL_RenderCopy(renderer, Message, NULL, &Message_rect);

        SDL_RenderPresent(renderer);

        frameStart = SDL_GetTicks() - frameStart;
        if (frameDelay > frameTime){
            SDL_Delay(frameDelay - frameTime);
        }
    }
}
*/
//set(SDL2_IMAGE_PATH "/Library/Frameworks/SDL2_image.framework")
//find_package(SDL2_image REQUIRED)
//include_directories( ${SDL2_IMAGE_INCLUDE_DIR})
//
//
//
//set(SDL2_TTF_PATH "/Library/Frameworks/SDL2_ttf.framework")
//find_package(SDL2_ttf REQUIRED)
//include_directories( ${SDL2_TTF_INCLUDE_DIR})