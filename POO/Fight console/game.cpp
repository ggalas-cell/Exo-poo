#include "game.h"
#include "player.h"
#include <iostream>

void game::initialise()
{
	turn = 1;
	isrunning = true;
	std::cout << "Initialisation de la Partie..." << std::endl;
	std::cout << "===Debut du jeu===" << std::endl;
}

void game::loop(player* player)
{
	while (isrunning)
	{
		std::cout << "Tour " << turn++ << " : voulez vous attaquez (a) ou fuir (f) ?";
		std::cin >> player->input;
		
		

		switch (player->input)
		{
		case 'a':
				std::cout << "Vous attaquez !" << std::endl;
				break;
		case 'f':
			std::cout << "Vous fuyez" << std::endl;
			isrunning = false;
			break;

		default:
			std::cout << "commande inconnue" << std::endl;
			break;
		}
	}
}

void game::shutdown()
{
	if(isrunning== false)
	{
		std::cout << "///	Game Over	///" << std::endl;
	}
}