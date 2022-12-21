#ifndef _LAND_
#define _LAND_
#include "Country.h"
#include <string>
#include <list>

class Land
{
private:
	string name;
	list<Country> listCountries;
public:
	Land();
	Land(string name, list<Country> listCountries);
	void setName(string name);
	string getName() const;
	void sortByGPD();
	void printLand();
	void printLandTopByGPD(const int &count);
	Country topByPopulation(governmentType type) const;

};

#endif // _LAND_
