#ifndef ELECTRIC_H_INCLUDED
#define ELECTRIC_H_INCLUDED

#include "Car.h"
#include "memtrace.h"

class Electric : public Car
{
	static const double consumption=129;
	static const int price=50;
	static const double maxfuel=300.0;

public:
    Electric(unsigned int id, unsigned int d, unsigned int ls, unsigned int km, double f=300.0):Car(id, d, f, ls, km){}
	int GetPrice(){return price;}
	bool IsService();
	double CalculateFuel(unsigned int);
	double PercentFuel();
	double GetMaxFuel(){return maxfuel;};
};

#endif // ELECTRIC_H_INCLUDED
