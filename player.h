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

void Player::setName(std::string n) {
	name = n;
}

std::string Player::getName() {
	return name;
}

void Player::setSunlight(int s) {
	sunlight = s;
}

void Player::updateSunlight(int us) {
	sunlight += us;
}

int Player::getSunlight() {
	return sunlight;
}

void Player::setHealth(int h) {
	health = h;
}

void Player::updateHealth(int uh) {
	health += uh;
}

int Player::getHealth() {
	return health;
}

void Player::killPlayer() {
	isAlive = false;
}

bool Player::getStatus() {
	return isAlive;
}