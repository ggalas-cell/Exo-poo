
#pragma once
#include "character.h"
class wizard : public character
{
public:
// heal
	void attack() override
	{
		std::cout << "Attaque du Wizard" << std::endl;
	}
};
