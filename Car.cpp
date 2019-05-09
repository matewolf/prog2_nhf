#include <iostream>
#include "Car.h"
#include "memtrace.h"

std::ostream& operator<<(std::ostream& os, const Car& c)
{
    os<<c.GetId();
    return os;
}
