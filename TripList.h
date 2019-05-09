#ifndef TRIPLIST_H_INCLUDED
#define TRIPLIST_H_INCLUDED

#include "Trip.h"
#include "memtrace.h"

class TripList
{
	Trip* tripList[200];
	int tripNum;
	TripList(const TripList&);
	TripList& operator=(const TripList&);

public:
	TripList() :tripNum(0){}
	void AddTrip(Trip* trip);
	int GetFullDistance();
	int GetFullDistance(Car*);
	int GetFullIncome();
	int GetFullIncome(Car*);
	//void ModifyDistrict();
	void ListTrip();
	~TripList(){}
};

#endif // TRIPLIST_H_INCLUDED
