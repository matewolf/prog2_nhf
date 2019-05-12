#include "Car.h"
#include "memtrace.h"

std::ostream& operator<<(std::ostream& os, const Car& c)
{
    os<<"ID: "<<c.GetId()<<"\tDistrict: "<<c.GetDistrict()<<"\tFuel level: "<<c.GetFuel()<<"\t\tKilometer: "<<c.GetKilometer()<<"\tLast service: "<<c.GetLastService()<<std::endl;
    return os;
}
