#include <iostream>
#include <vector>
#include "game.h"
#include "player.h"
int main()
{
	game g;
	player p;
	g.initialise();
	g.loop(&p);
	g.shutdown();
	}