#pragma once
#include <string>
class Item
{
private:
	std::string name;
	int effect;
	int price;
	
public:
	void Heal(Item)
	{

	}
	Item(std::string n,int p,int e) :name(n),price(p), effect(e) {}
};

class miniPotion
{
private:
	Item item;
public:
	miniPotion() : item("Mini potion",5, 10) {}
};

class Potion
{
private:
	Item item;
public:
	Potion() : item("Potion",20, 30) {}
};

class superPotion
{
private:
	Item item;
public:
	superPotion() : item("Super potion",40, 50) {}
};

