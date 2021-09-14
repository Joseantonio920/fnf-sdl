#include <stdio.h>
#include <string.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "key.hpp"

Key::Key(SDL_Renderer *renderer, int type, int x, int y){
    rect.x=x;
    rect.y=y;

    if(type==1){
        image=IMG_LoadTexture(renderer, "../assets/left.png");
    }
    if(type==2){
        image=IMG_LoadTexture(renderer, "../assets/down.png");
    }
    if(type==3){
        image=IMG_LoadTexture(renderer, "../assets/up.png");
    }
    if(type==4){
        image=IMG_LoadTexture(renderer, "../assets/right.png");
    }
}

void Key::draw(SDL_Renderer *renderer){
    if(isdown){
        rect.y=2;
    }else{
        rect.y=0;
    }
    SDL_RenderCopy(renderer, image, NULL, &rect);
}

void Key::down(){
    if(isdown){
        isdown=0;
    }else{
        isdown=1;
    }
}