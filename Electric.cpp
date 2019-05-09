#include "Electric.h"
#include "memtrace.h"

bool Electric::IsService()
{
    if (this->GetKilometer()-this->GetLastService()>100000)
        return true;
    return false;
}

double Electric::CalculateFuel(unsigned int km)
{
    return (km+0.0)/100.0*consumption;
}
