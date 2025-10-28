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

class Player
{
private:
	Character charac;
public:
	Player() : charac("Player",50,200){}
};

void Display(Player);
 