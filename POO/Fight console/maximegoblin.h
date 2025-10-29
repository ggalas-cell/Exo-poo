#pragma once
#include "character.h"
#include <iostream>
class maximegoblin : public character
{
public:
	void attack() override
	{
		std::cout << "Attaque Critique " << std::endl;
	}
};

