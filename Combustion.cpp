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
    return (this->GetKilometer())+0.0/100.0*consumption;
}
