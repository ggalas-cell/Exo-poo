#pragma once
#include "Item.h"
#include <vector>
class Character
{
private:	
	std::string name;
	int currentHealth;
	int maxHealth;
	std::vector<Item> inventory;
public:
	Character(std::string n, int ch,int mh) : name(n), currentHealth(ch),maxHealth(mh){}
};

class Player : public character
{
private:
	Character charac;
public:
	charac("Player",50,200){} // voir cours partie 2
	void Display(const Player)
	{
		std::cout<< charac <<std::endl;
	}
};

void HealCharac(Player)
{
	
}
void AddItem(const Item& item)
{
	inventory.push_back(item);
}
