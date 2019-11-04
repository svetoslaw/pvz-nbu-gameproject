#include "SDL.h"
#include <iostream>
#include "Player.h"

using namespace std;

SDL_Window* window;
SDL_Renderer* renderer;

int main(int argc, char* argv[])
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
		renderer = SDL_CreateRenderer(window, -1, 0);

		SDL_Texture* main_menu_bg;
		SDL_Surface* temp_surface = SDL_LoadBMP("assets/fvz_main_menu.bmp");
		main_menu_bg = SDL_CreateTextureFromSurface(renderer, temp_surface);
		SDL_FreeSurface(temp_surface);

		SDL_RenderClear(renderer);
		SDL_RenderCopy(renderer, main_menu_bg, 0, 0);
		SDL_RenderPresent(renderer);

	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;

}