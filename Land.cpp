#include "Land.h"
#include <list>

Land::Land()
{
	this->name = "";
	this->listCountries.clear();
}

Land::Land(string name, list<Country> listCountries)
{
	this->name = name;
	this->listCountries = listCountries;
}

void Land::setName(string name)
{
	this->name = name;
}

string Land::getName() const
{
	return name;
}

void Land::printLand()
{   
	cout << name << endl << endl;
	for (const auto& country : listCountries)
	{
		country.displayinfo();
		cout << endl;
	}
}

static bool compCountryByGPDByDecrease(const Country& countryLeft, 
	const Country& countryRight)
{ 
	return countryLeft.getGPD() > countryRight.getGPD();
}

void Land::sortByGPD()
{
	listCountries.sort(compCountryByGPDByDecrease);
}

void Land::printLandTopByGPD(const int &count)
{
	int top_сount = count;

	cout << name << endl << endl;
	sortByGPD();
	for (const auto& country : listCountries)
	{
		country.displayinfo();
		cout << endl;
		if (--top_сount == 0)
			break;
	}
}

Country Land::topByPopulation(governmentType type) const
{
	Country maxCountryByPopulation;

	for (const auto& country : listCountries)
	{
		if (country.getGovernmentType() == type)
		{
			if (maxCountryByPopulation.getPopulation() < country.getPopulation())
				maxCountryByPopulation = country;
		}
			
	}
	return maxCountryByPopulation;
}
