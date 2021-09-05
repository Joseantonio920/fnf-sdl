all:
	g++ -c main.cpp
	mv main.o build
	g++ -c scr/player.cpp
	mv player.o build
	g++ -c scr/key.cpp
	mv key.o build
	g++ -o dist/fnf.AppImage build/main.o build/player.o build/key.o `sdl2-config --cflags --libs` -lSDL2 -lSDL2_image