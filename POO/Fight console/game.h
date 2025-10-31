#pragma once
#include "player.h"
enum class gamestat
{
	play,
	death,
	win,
	loose,
	quit
};
class game
{
private:
	int turn;
	bool isrunning;
	gamestat stat;
public:
	game(): isrunning(false),turn(1){}
	void initialise();
	void loop(player* player);
	void shutdown();
};
