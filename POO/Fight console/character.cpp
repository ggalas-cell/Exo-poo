#include "character.h"
#include <iostream>

character::character(const std::string& n, int d, int ch,int mh)
	:name (n), dmg(d),currentHp(ch),maxHp(mh){}

void character::display() const
{
    std::cout << name << std::endl;
    std::cout << "Damage :" << dmg << std::endl;
    std::cout << "Hp :" << currentHp << "/" << maxHp << std::endl;
    std::cout << "" << std::endl;
}

//void takedmg(int Hp,int dmg)
//{
//	Hp -= dmg;
//}a
