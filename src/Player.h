#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
public:
	Player() {}
	void setName(std::string n);
	std::string getName();
	void setSunlight(int s);
	void updateSunlight(int us); //increasing over time or manual decrease after purchase.
	int getSunlight();
	void setHealth(int h);
	void updateHealth(int uh); //'uh' is a negative value, for when a zombie passes the line.
	int getHealth();
	void killPlayer();
	bool getStatus(); //check live or dead status of player.
private:
	std::string name;
	int sunlight, health;
	bool isAlive = true;
};

#endif // !PLAYER_H