#pragma once
#include <string>
class Item
{
private:
	std::string name;
	int effect;
public:
	Item(std::string n,int d) :name(n), effect (d) {}

};

class miniPotion
{
private:
	Item item;
public:
	miniPotion() : item("Mini potion", 10) {}
};

class Potion
{
private:
	Item item;
public:
	Potion() : item("Potion", 30) {}
};

class superPotion
{
private:
	Item item;
public:
	superPotion() : item("Super potion", 50) {}
};

