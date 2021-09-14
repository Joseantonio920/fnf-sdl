#ifndef KEY_HPP
#define KEY_HPP
#include "SDL2/SDL.h"

class Key{
    private:
        SDL_Rect rect={0, 0, 24, 24};
        SDL_Texture *image;
        int isdown=0;
    public:
        void draw(SDL_Renderer *renderer);
        void down();
        Key(SDL_Renderer *renderer, int type, int x, int y);
};

#endif