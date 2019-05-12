#include "Combustion.h"
#include "memtrace.h"

bool Combustion::IsService()
{
    if (this->GetKilometer()-this->GetLastService()>30000)
        return true;
    return false;
}

double Combustion::CalculateFuel(unsigned int km)
{
    return (km+0.0)/100.0*consumption;
}

double Combustion::PercentFuel()
{
    return this->GetFuel()/maxfuel*100;
}
