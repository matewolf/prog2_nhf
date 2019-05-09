#ifndef TRIP_H_INCLUDED
#define TRIP_H_INCLUDED

#include "Car.h"
#include "memtrace.h"

class Trip
{
	Car* car;
	char* driver;
	const int distance;
	const int duration;
	const int destDist;

public:
	Trip(Car* car, char* driver, int dist, int dur, int dest) : car(car), driver(driver), distance(dist), duration(dur), destDist(dest) {}
	int GetDestDist() const {return destDist;}
	int GetDistance() const {return distance;}
	int GetIncome();
	int GetDuration () const {return duration;}
	Car* GetCar()const {return car;}
};

std::ostream& operator<<(std::ostream& os, const Trip& t);

#endif // TRIP_H_INCLUDED
