#pragma once
#include <vector>

#include "City.h"

class Region
{
private:
	std::vector<City*> cities;
public:
	Region(std::vector<City*>);
	~Region();
};

