#include "SDL.h"
#include <iostream>
#include "Player.h"

using namespace std;

SDL_Window* window;
SDL_Renderer* renderer;

int main(int argc, char* args[])
{
	//Main Window
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
	window = SDL_CreateWindow(
		"Flora vs. Undead",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		1280,
		720,
		SDL_WINDOW_SHOWN
	);

	renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);

	//Main Loop
	SDL_Event event;
	bool running = true;
	while (running) 
	{
		while (SDL_PollEvent(&event)) 
		{
			if (event.type == SDL_QUIT) 
			{
				running = false;
				break;
			}
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}