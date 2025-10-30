#pragma once
#include "character.h"
#include <iostream>
#include <string>
class maximegoblin : public character
{
private:
	//std::string title = "Advanced Goblin";
public:
	//void displayt()const;
	void attack() override
	{
		std::cout << "Attaque Critique " << std::endl;
	}
};

