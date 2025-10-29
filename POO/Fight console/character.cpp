#include "character.h"
#include <iostream>

character::character(const std::string& n, int d, int h)
	:name (n), dmg(d),Hp(h){}

//void takedmg(int Hp,int dmg)
//{
//	Hp -= dmg;
//}