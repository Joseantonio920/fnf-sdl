#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "SDL2/SDL.h"

class Player{
    private:
        SDL_Rect rect={0, 0, 32, 32};
        SDL_Texture *image;
    public:
        void draw(SDL_Renderer *renderer);
        void key(SDL_Keycode key);
        Player(SDL_Renderer *renderer, int x, int y);
};

#endif