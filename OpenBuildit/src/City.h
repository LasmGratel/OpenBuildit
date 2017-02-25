#pragma once
#include "Region.h"

class City
{
private:
	int height, width;
	Region* region;
public:
	City(int, int, Region*);
	~City();
};

