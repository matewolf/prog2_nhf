#include "CarList.h"
#include "Car.h"
#include <iostream>
#include "memtrace.h"

void CarList::AddCar(Car* car)
{
	if (carNum >= 100)
		throw "Nem vihetõ fel több jármû.";
	carList[carNum++] = car;
}



void CarList::ListFuel()
{

}

