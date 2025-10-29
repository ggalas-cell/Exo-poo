#pragma once
#include <string>
#include <iostream>
class character
{
private:
	std::string name;
	int dmg;
	int Hp;
public:
	character(const std::string& n, int d, int h): name(n), dmg(d), Hp(h){}

	void attack()
	{
		std::cout << "Attaque de base" << std::endl;
	}
};



