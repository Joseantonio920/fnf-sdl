x86_64-w64-mingw32-g++ -c main.cpp
mv main.o build
x86_64-w64-mingw32-g++ -c scr/player.cpp
mv player.o build
x86_64-w64-mingw32-g++ -c scr/key.cpp
mv key.o build
x86_64-w64-mingw32-g++ -o dist/fnf64.exe build/main.o build/player.o build/key.o -lSDL2 -lSDL2_image -lSDL2_mixer -static-libstdc++ -static-libgcc
