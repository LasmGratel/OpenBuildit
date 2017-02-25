#include "Region.h"

#include <cstdarg>


Region::Region(std::vector<City*> cities)
{
	Region::cities.insert(std::end(cities), std::begin(cities), std::end(cities));
}

Region::~Region()
{
}
