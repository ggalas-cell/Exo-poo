#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "hero.h"
class heromanager
{
private:
	std::vector<std::unique_ptr<hero>> heros;
public:
	void add(std::unique_ptr<hero> h);
	//void Update();
	void Updateall();
};

