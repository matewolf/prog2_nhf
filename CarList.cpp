#include "CarList.h"
#include "Car.h"
#include <iostream>
#include "memtrace.h"

void CarList::AddCar(Car* car)
{
	if (carNum >= 100)
		throw "Nem vihet� fel t�bb j�rm�.";
	carList[carNum++] = car;
}



void CarList::ListFuel()
{

}

