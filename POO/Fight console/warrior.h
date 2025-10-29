#pragma once
#include "character.h"
class warrior : public character
{
public:

	void attack()
	{
		std::cout << "Attaque du Warrior" << std::endl;
	}
};
