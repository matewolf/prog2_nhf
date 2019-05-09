#include "Trip.h"
#include "memtrace.h"

int Trip::GetIncome()
{
    return car->GetPrice()*duration;
}

std::ostream& operator<<(std::ostream& os, const Trip& t)
{
    os<<"Car: "<<t.GetCar()->GetId()<<"\tDuration: "<<t.GetDuration()<<"\tDistance: "<<t.GetDistance()<<std::endl;
}
