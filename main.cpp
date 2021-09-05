#include <stdio.h>
#include "SDL2/SDL.h"
#include "scr/player.hpp"
#include "scr/key.hpp"

int main(){
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *window=SDL_CreateWindow("fnf sdl", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 240, 160, SDL_WINDOW_SHOWN);
    SDL_Renderer *renderer=SDL_CreateRenderer(window, -1, 0);
    SDL_Event event;

    Key *key=new Key(renderer, 216, 0);
    Player *player=new Player(renderer, 160, 120);

    int game=1;
    while(game){
        while(SDL_PollEvent(&event)){
            if(event.type==SDL_QUIT){
                game=0;
            }
            if(event.type==SDL_KEYDOWN || event.type==SDL_KEYUP){
                player->key(event.key.keysym.sym);
            }
        }
        SDL_SetRenderDrawColor(renderer, 200, 200, 200, 255);
        SDL_RenderClear(renderer);
        player->draw(renderer);
        key->draw(renderer);
        SDL_RenderPresent(renderer);
    }

    SDL_Quit();
    return 0;
}