#include "heromanager.h"
#include<iostream>

void heromanager::add(std::unique_ptr<hero> h)
{
	heros.push_back(std::move(h));
}

//void Update()
//{
//	heros.push_back(int currentHp)
//}

void heromanager::Updateall()
{
	for (auto& h : heros){}
		//h->Update();
}

