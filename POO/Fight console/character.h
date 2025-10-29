#pragma once
#include <string>
#include <iostream>
class character
{
private:
	std::string name;
	int dmg;
	int currentHp;
	int maxHp;
public:
	character(const std::string& n, int d, int ch,int mh);

	virtual void attack()
	{
		std::cout << "Attaque de base" << std::endl;
	}
	virtual ~character(){}
	// attack
	void death(int Hp);

};



