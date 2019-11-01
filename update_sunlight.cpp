double startTime = GetTickCount();
while (player.getStatus()) //player is a premade object of Player class, works while player is alive.
{
	double currentTime = GetTickCount() - startTime;
	if (currentTime >= 10000) {  //10 seconds.
		this->updateSunlight(10); //updated by +10
		startTime = GetTickCount();
	}
}