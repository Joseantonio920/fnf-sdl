all: main.o player.o key.o
	g++ -o dist/fnf.AppImage build/main.o build/player.o build/key.o `sdl2-config --cflags --libs` -lSDL2 -lSDL2_image -lSDL2_mixer
clear: build/main.o build/player.o build/key.o
	rm build/main.o build/player.o build/key.o
main.o: main.cpp
	g++ -c main.cpp
	mv main.o build
player.o: scr/player.cpp
	g++ -c scr/player.cpp
	mv player.o build
key.o: scr/key.cpp
	g++ -c scr/key.cpp
	mv key.o build
