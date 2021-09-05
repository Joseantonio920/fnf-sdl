#include <stdio.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "key.hpp"

Key::Key(SDL_Renderer *renderer, int x, int y){
    rect.x=x;
    rect.y=y;
    
    SDL_Surface *surface=IMG_Load("../assets/right.png");
    image=SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
}

void Key::draw(SDL_Renderer *renderer){
    SDL_RenderCopy(renderer, image, NULL, &rect);
}