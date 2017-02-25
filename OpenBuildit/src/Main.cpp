extern "C"
{
#include "../libs/libsdl-2/include/SDL.h"
}

using namespace std;

int main(int argc, char* argv[])
{
	SDL_Window* window = SDL_CreateWindow("Open Buildit", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_OPENGL);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_TARGETTEXTURE | SDL_RENDERER_ACCELERATED);
}