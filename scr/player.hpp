#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "SDL2/SDL.h"
#include "key.hpp"

class Player{
    private:
        SDL_Rect rect={0, 0, 32, 32};
        SDL_Texture *image;

        Key *key1;
        Key *key2;
        Key *key3;
        Key *key4;
    public:
        void draw(SDL_Renderer *renderer);
        void key(SDL_Keycode key);
        void setKeys(Key *k1, Key *k2, Key *k3, Key *k4);
        Player(SDL_Renderer *renderer, int x, int y);
};

#endif