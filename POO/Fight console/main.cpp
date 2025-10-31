#include <iostream>
#include "warrior.h"
#include "wizard.h"
#include "character.h"
#include "maximegoblin.h"
#include <vector>

int amain()
{
	character warrio("Borg", 20, 500, 500);
	character wizard ("The fool", 30, 300, 300);
	character maximegoblin("Maxime Goblin", 999,100,100);
	warrio.display();
	wizard.display();
	//displayt();
	maximegoblin.display();
	//attack
//     définir dans main attaque wizard warrior et mg
	
	std::vector<character*> charac;
	//charac.push_back(new warrior("Borg"));

	return 0;
}
