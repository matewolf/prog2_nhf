#ifndef CARLIST_H_INCLUDED
#define CARLIST_H_INCLUDED

#include "Car.h"
#include "memtrace.h"

class CarList
{
	Car* carList[100];
	int carNum;
	CarList(const CarList&);
	CarList& operator=(const CarList&);

public:
	CarList() :carNum(0) {};
	void AddCar(Car* car);
	void ListService();
	void ListFuel();
	void ListDistrict();
	~CarList()
	{
	    for (int i=0;i<carNum;i++)
            delete carList[i];
	}
};

#endif // CARLIST_H_INCLUDED
