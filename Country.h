#ifndef _COUNTRY_
#define _COUNTRY_
#include <string>
#include <iostream>
#include <map>
#include <list>

using namespace std;

enum governmentType {
	DEMOCRACY,
	REPUBLIC,
	AUTOCRACY,
    MONARCHY,
	UNKNOWN
};

class Country
{
	friend double сalculatePopulationDensity(list<Country>& Countries);	
private:
	string name;
	string capital;
	int code;
	double population;
	double area;
	double GPD;
	governmentType type;
	const map<governmentType, string> governmentTypeToString = {
		{ DEMOCRACY, "DEMOCRACY" },
		{ REPUBLIC, "REPUBLIC" },
		{ AUTOCRACY, "AUTOCRACY" },
	    { MONARCHY,  "MONARCHY" },
		{ UNKNOWN, "UNKNOWN" }
	};
public:
	Country();
	Country(string name, string capital, double population, double area,
		double GPD, int ocode, governmentType Type);
	void displayinfo() const;
	void setName(string name);
	string getName() const;
	void setCapital(string capital);
	string getCapital() const;
	void setPopulation(double population);
	double getPopulation() const;
	void setArea(double area);
	double getArea() const;
	void setGPD(double GPD);
	double getGPD() const;
	void setCode(int	 code);
	int getCode() const;
	void setGovernmentType(governmentType type);
	governmentType getGovernmentType() const;
	Country& operator=(const Country&);
};

#endif // !_COUNTRY_
