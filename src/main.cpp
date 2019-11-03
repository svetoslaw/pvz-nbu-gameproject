#include "SDL.h"
#include <iostream>
#include <Windows.h>
#include "player.h"

int main(int argc, char* args[])
{
	Player player = Player();
	double startTime = GetTickCount();
	while (player.getStatus() != false) {
		double currentTime = GetTickCount() - startTime;
		if (currentTime >= 10000) {  //10 seconds.
			player.updateSunlight(10); //updated by +10
			std::cout << player.getSunlight() << std::endl;
			startTime = GetTickCount();
		}

		
	}

	return 0;
}