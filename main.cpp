#include <stdio.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_mixer.h"
#include "scr/player.hpp"
#include "scr/key.hpp"

int main(){
    Mix_OpenAudio(22050, MIX_DEFAULT_FORMAT, 2, 4096);
    SDL_Window *window=SDL_CreateWindow("fnf sdl", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 240, 160, SDL_WINDOW_SHOWN);
    SDL_Renderer *renderer=SDL_CreateRenderer(window, -1, 0);
    SDL_Event event;

    Key *key1=new Key(renderer, 1, 144, 0);
    Key *key2=new Key(renderer, 2, 168, 0);
    Key *key3=new Key(renderer, 3, 192, 0);
    Key *key4=new Key(renderer, 4, 216, 0);
    Player *player=new Player(renderer, 160, 120);
    player->setKeys(key1, key2, key3, key4);
    Uint32 lastEvent=0;
    Mix_Chunk *music=Mix_LoadWAV("../assets/Dadbattle_Inst.wav");
    Mix_PlayChannel(-1, music, 0);

    int game=1;
    while(game){

        while(SDL_PollEvent(&event)){
            if(event.type==SDL_QUIT){
                game=0;
            }
            if((event.type==SDL_KEYDOWN && event.type!=lastEvent || event.type==SDL_KEYUP && event.type!=lastEvent)){
                player->key(event.key.keysym.sym);
                lastEvent=event.type;
            }
        }
        SDL_SetRenderDrawColor(renderer, 200, 200, 200, 255);
        SDL_RenderClear(renderer);
        player->draw(renderer);
        key1->draw(renderer);
        key2->draw(renderer);
        key3->draw(renderer);
        key4->draw(renderer);
        SDL_RenderPresent(renderer);
    }
    
    SDL_Quit();
    return 0;
}

int WinMain(){
    return main();
}
