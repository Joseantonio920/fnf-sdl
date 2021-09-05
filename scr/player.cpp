#include <stdio.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "player.hpp"

Player::Player(SDL_Renderer *renderer, int x, int y){
   rect.x=x;
   rect.y=y;

   SDL_Surface *surface=IMG_Load("../assets/boyfriend.png");
   image=SDL_CreateTextureFromSurface(renderer, surface);
   SDL_FreeSurface(surface);
}

void Player::draw(SDL_Renderer *renderer){
   SDL_RenderCopy(renderer, image, NULL, &rect);
}

void Player::key(SDL_Keycode key){
   if(key==SDLK_DOWN){
      printf("down\n");
   }
   if(key==SDLK_UP){
      printf("up\n");
   }
   if(key==SDLK_LEFT){
      printf("left\n");
   }
   if(key==SDLK_RIGHT){
      printf("right\n");
   }
}