#include <iostream>

#include "Combustion.h"
#include "Electric.h"
#include "Trip.h"
#include "TripList.h"
#include "memtrace.h"

int main()
{
    Combustion car1(00, 1, 150000, 181000);
    std::cout<<car1.CalculateFuel(50)<<std::endl;
    std::cout<<car1.IsService()<<std::endl;

    Electric car2(01, 1, 150000, 255000);
    std::cout<<car2.CalculateFuel(50)<<std::endl;
    std::cout<<car2.IsService()<<std::endl;

    std::cout<<car2<<std::endl;

    Trip trip1(&car1, "Driver", 10, 60, 2);

    std::cout<<trip1;

    TripList tl;
    tl.AddTrip(&trip1);
}
