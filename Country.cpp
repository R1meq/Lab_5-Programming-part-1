#include "Country.h"
#include <list>

Country::Country()
{
	this->name = "";
	this->capital = "";
	this->population = 0.0;
	this->area = 0.0;
	this->GPD = 0.0;
	this->code = 0;
	this->type = UNKNOWN;
}

Country::Country(string name, string capital, double population,
	double area, double GPD, int code, governmentType type)
{
	this->name = name;
	this->capital = capital;
	this->population = population;
	this->area = area;
	this->GPD = GPD;
	this->code = code;
	this->type = type;
}

void Country::setName(string name)
{
	this->name = name;
}

string Country::getName(void) const
{
	return name;
}

void Country::setCapital(string capital)
{
	this->capital = capital;
}

string Country::getCapital(void) const
{
	return capital;
}

void Country::setPopulation(double population)
{
	this->population = population;
}

double Country::getPopulation(void) const
{
	return population;
}

void Country::setArea(double area)
{
	this->area = area;
}

double Country::getArea(void) const
{
	return area;
}

void Country::setGPD(double GPD)
{
	this->GPD = GPD;
}

double Country::getGPD(void) const
{
	return GPD;
}

void Country::setCode(int code)
{
	this->code = code;
}

int Country::getCode(void) const
{
	return code;
}

void Country::setGovernmentType(governmentType type)
{
	this->type = type;
}

governmentType Country::getGovernmentType() const
{
	return type;
}

void Country::displayinfo() const
{
	cout << "name: " << name << endl;
	cout << "capital: " << capital << endl;
	cout << "population: " << population<< " millions" << endl;
	cout << "area: " << area <<" km"<< endl;
	cout << "GPD: " <<"$" << GPD << " Per capita" << endl;
	cout << "code: " <<"+"<< code << endl;
	cout << "government type: " << governmentTypeToString.find(type)->second << endl;
}

double сalculatePopulationDensity(list<Country>& Countries)
{
	double sum_population = 0.0;
	double sum_area = 0.0;

	for (const auto& country : Countries)
	{
		sum_population += country.population;
        sum_area += country.area;
    }
	return sum_population / sum_area;
}

Country& Country::operator=(const Country& otherCountry)
{
	this->name = otherCountry.name;
	this->capital = otherCountry.capital;
	this->population = otherCountry.population;
	this->area = otherCountry.area;
	this->GPD = otherCountry.GPD;
	this->code = otherCountry.code;
	this->type = otherCountry.type;
	return *this;
}
