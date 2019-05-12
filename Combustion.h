#ifndef COMBUSTION_H_INCLUDED
#define COMBUSTION_H_INCLUDED

#include "Car.h"
#include "memtrace.h"

class Combustion : public Car
{
	static const double consumption=5.0;
	static const int price=66;
	static const double maxfuel=50.0;

public:
    Combustion(unsigned int id, unsigned int d, unsigned int ls, unsigned int km, double f=50.0):Car(id, d, f, ls, km){}
	int GetPrice(){return price;}
	bool IsService();
	double CalculateFuel(unsigned int);
	double PercentFuel();
	double GetMaxFuel(){return maxfuel;};
};

#endif // COMBUSTION_H_INCLUDED
