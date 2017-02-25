#include "City.h"

City::City(int height, int width, Region* region)
{
	City::height = height;
	City::width = width;
	City::region = region;
}

City::~City()
{
}
