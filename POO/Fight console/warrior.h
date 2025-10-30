#pragma once
#include "character.h"
class warrior : public character
{
public:

	;
	void attack() override
	{
		std::cout << "Attaque du Warrior" << std::endl;
	}
	
};
	

