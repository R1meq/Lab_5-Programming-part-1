#include "Country.h"
#include "Land.h"
#include <iostream>

int main(void)
{
	Country France("France", "Paris", 67.5, 543940, 56.036, 33, REPUBLIC);
	Country Spain("Spain", "Madrid", 47.3, 505990, 46.511, 34, MONARCHY);
	Country Switzerland("Switzerland", "Bern", 8.6, 41285, 84.658,41, DEMOCRACY);
	Country Belgium("Belgium","Brussels", 11.6 , 30688, 61.586,32, MONARCHY);
	Country Portugal("Portugal","Lisbon", 10.3, 92212, 42.067, 351, REPUBLIC);
	list<Country>countries = {France, Spain, Switzerland, Belgium, Portugal};
	Land land("Europe", countries);

	land.printLand();
	cout << "PopulationDensity: " << сalculatePopulationDensity(countries) << " million/km" << endl;
	cout << "--------------------- Output after sort by GPD-----------------------" << endl;
	land.sortByGPD();
	land.printLand();
	cout << endl;
	cout << "--------------------- Output Top 3 Country by GPD-----------------------" << endl;
	const int topCount = 3;
	land.printLandTopByGPD(topCount);
	cout << "--------------------- Output TOP 1 Country by population-----------------------" << endl;
	land.TopByPopulation(REPUBLIC).displayinfo();
	return 0;
}
