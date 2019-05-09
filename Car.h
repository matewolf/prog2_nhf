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

public:
	Car(unsigned int id, unsigned int d, double f, unsigned int ls, unsigned int km) :id(id), lastService(ls), kilometer(km), district(d), fuel(f) {};
	void SetKilometer(unsigned int km){kilometer=km;}
	unsigned int GetKilometer(){return kilometer;}
	void SetFuel(double f){fuel=f;}
	double GetFuel(){return fuel;}
	void SetDistrict(unsigned int d){district=d;}
	unsigned int GetDistrict(){return district;}
	virtual bool IsService()=0;
	virtual int GetPrice()=0;
	virtual double CalculateFuel(unsigned int)=0;
	unsigned int GetLastService(){return lastService;}
	void SetLastService(unsigned int ls){lastService=ls;}
	unsigned int GetId() const {return id;}
	virtual ~Car(){}
};

std::ostream& operator<<(std::ostream& os, const Car& c);

#endif // CAR_H_INCLUDED
