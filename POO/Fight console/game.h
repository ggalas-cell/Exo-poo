#pragma once
#include "player.h"
class game
{
private:
	int turn;
	bool isrunning;
public:
	game(): isrunning(false),turn(1){}
	void initialise();
	void loop(player* player);
	void shutdown();
};
