#include "character.h"
#include <iostream>

character::character(const std::string& n, int d, int ch,int mh)
	:name (n), dmg(d),currentHp(ch),maxHp(mh){}

//void takedmg(int Hp,int dmg)
//{
//	Hp -= dmg;
//}a
void display()const
{
    std::cout<<name(n)<<std::endl;
    std::cout<<"Damage :"<<dmg(d)<<std::endl;
    std::cout<<"Hp :"<<currentHp(ch)<<"/"<<maxHp(mh)<<std::endl;
}
