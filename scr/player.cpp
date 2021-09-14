#include <stdio.h>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "player.hpp"
#include "key.hpp"

Player::Player(SDL_Renderer *renderer, int x, int y){
   rect.x=x;
   rect.y=y;

   image=IMG_LoadTexture(renderer, "../assets/boyfriend.png");
}

void Player::draw(SDL_Renderer *renderer){
   SDL_RenderCopy(renderer, image, NULL, &rect);
}

void Player::key(SDL_Keycode key){
   if(key==SDLK_LEFT){
         key1->down();
      }
      if(key==SDLK_DOWN){
         key2->down();
      }
      if(key==SDLK_UP){
         key3->down();
      }
      if(key==SDLK_RIGHT){
         key4->down();
      }
}

void Player::setKeys(Key *k1, Key *k2, Key *k3, Key *k4){
   key1=k1;
   key2=k2;
   key3=k3;
   key4=k4;
}
