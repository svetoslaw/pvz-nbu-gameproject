#include "SDL.h"
#include "iostream"
#include "Windows.h"
#include "Player.h"

int main(int argc, char* args[])
{
	Player player = Player();
	double startTime = GetTickCount();
	while (player.getStatus() != false) {
		double currentTime = GetTickCount() - startTime;
		if (currentTime >= 10000) {  //10 seconds.
			player.updateSunlight(10); //updated by +10
			startTime = GetTickCount();
		}
		
		//Rest of code goes here

	}

	return 0;
}