#pragma once
#include "character.h"
class wizard : public character
{
public:
	void attack()
	{
		std::cout << "Attaque du Warrior" << std::endl;
	}
};
