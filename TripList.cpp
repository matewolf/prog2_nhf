#include "TripList.h"
#include "memtrace.h"

void TripList::AddTrip(Trip* trip)
{
    if (tripNum>=200)
        throw "Nem vihetõ fel több utazás.";
    tripList[tripNum++]=trip;
}

int TripList::GetFullDistance()
{
    int fullDist=0;
    for(int i=0;i<tripNum; i++)
        fullDist+=tripList[i]->GetDistance();
    return fullDist;
}

int TripList::GetFullDistance(Car* c)
{
    int fullDist=0;
    for(int i=0;i<tripNum; i++)
        if (c==tripList[i]->GetCar())
            fullDist+=tripList[i]->GetDistance();
    return fullDist;
}

int TripList::GetFullIncome()
{
    int fullincome=0;
    for (int i=0;i<tripNum;i++)
        fullincome+=tripList[i]->GetIncome();
    return fullincome;
}

int TripList::GetFullIncome(Car* c)
{
    int fullincome=0;
    for (int i=0;i<tripNum;i++)
        if (c==tripList[i]->GetCar())
            fullincome+=tripList[i]->GetIncome();
    return fullincome;
}

void TripList::ListTrip()
{
    for (int i=0;i<tripNum;i++)
        std::cout<<tripList[i];
}
