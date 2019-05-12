#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include <iostream>

#include "memtrace.h"

class Car
{
    unsigned int id;
	unsigned int district;
	double fuel;
    unsigned int lastService;
	unsigned int kilometer;
	Car(const Car&);
	Car& operator=(const Car&);

public:
	Car(unsigned int id, unsigned int d, double f, unsigned int ls, unsigned int km) :id(id), district(d), fuel(f), lastService(ls), kilometer(km) {};
	void SetKilometer(unsigned int km){kilometer=km;}
	unsigned int GetKilometer() const {return kilometer;}
	void SetFuel(double f){fuel=f;}
	double GetFuel() const {return fuel;}
	void SetDistrict(unsigned int d){district=d;}
	unsigned int GetDistrict() const {return district;}
	virtual bool IsService()=0;
	virtual int GetPrice()=0;
	virtual double CalculateFuel(unsigned int)=0;
	virtual double GetMaxFuel()=0;
	unsigned int GetLastService() const {return lastService;}
	void SetLastService(unsigned int ls){lastService=ls;}
	unsigned int GetId() const {return id;}
	virtual double PercentFuel()=0;
	virtual ~Car(){}
};

std::ostream& operator<<(std::ostream& os, const Car& c);

#endif // CAR_H_INCLUDED
