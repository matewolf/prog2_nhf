#include <iostream>

#include "Combustion.h"
#include "Electric.h"
#include "Trip.h"
#include "TripList.h"
#include "memtrace.h"
#include "Car.h"
#include "CarList.h"

int main()
{
    //Create CarList
    CarList clist;

    //Fill list with values
    clist.AddCar(new Electric(0,2,100000,125449,200.0));
    clist.AddCar(new Electric(1,2,80000,193553,54.0));
    clist.AddCar(new Electric(2,2,80000,96318,33.0));
    clist.AddCar(new Electric(3,2,100000,159509,98.0));
    clist.AddCar(new Electric(4,2,100000,191167,18.0));
    clist.AddCar(new Electric(5,2,0,47913,130.0));
    clist.AddCar(new Combustion(6,2,50000,87942,41.0));
    clist.AddCar(new Combustion(7,2,120000,163795,19.0));
    clist.AddCar(new Combustion(8,2,100000,141787,16.0));
    clist.AddCar(new Combustion(9,2,120000,134583,30.0));
    clist.AddCar(new Combustion(10,2,200000,202181,5.0));
    clist.AddCar(new Combustion(11,2,60000,144802,17.0));

    //ListFuel teszt
    std::cout<<"ListFuel:"<<std::endl;
    clist.ListFuel();
    std::cout<<std::endl;

    //ListService teszt
    std::cout<<"ListService:"<<std::endl;
    clist.ListService();
    std::cout<<std::endl;

    //ListDistrict teszt
    std::cout<<"ListDistrict:"<<std::endl;
    clist.ListDistrict();
    std::cout<<std::endl;

//    //CalculateFuel teszt
//    std::cout<<"CalculateFuel:"<<std::endl;
//    std::cout<<clist[0]->CalculateFuel(100)<<std::endl;
//    std::cout<<clist[2]->CalculateFuel(100)<<std::endl;
//    std::cout<<std::endl;

    //ModifyDistrict teszt
    std::cout<<"ModifyDistrict:"<<std::endl;
    clist.ModifyDistrict();
    std::cout<<std::endl;

    //Create TripList
    TripList tlist;

    //Check modifying of TripList
    std::cout<<"Result of adding a new trip: "<<std::endl;
    std::cout<<"car0 before: "<<*(clist[0]);
    tlist.AddTrip(new Trip(clist[0], "Mate", 20, 20, 12));
    std::cout<<"car0 after: "<<*(clist[0]);
    std::cout<<std::endl;

    //Add trips
    tlist.AddTrip(new Trip(clist[3], "Nikolett", 6, 40, 9));
    tlist.AddTrip(new Trip(clist[8], "Zsófia", 20, 35, 11));
    tlist.AddTrip(new Trip(clist[7], "Aliz", 13, 38, 7));
    tlist.AddTrip(new Trip(clist[6], "Ilka", 17, 33, 1));
    tlist.AddTrip(new Trip(clist[0], "Edina", 8, 10, 4));
    tlist.AddTrip(new Trip(clist[5], "Ádám", 5, 11, 10));
    tlist.AddTrip(new Trip(clist[8], "Letícia", 9, 44, 5));
    tlist.AddTrip(new Trip(clist[1], "Kató", 15, 22, 10));
    tlist.AddTrip(new Trip(clist[7], "Elemér", 8, 26, 2));
    tlist.AddTrip(new Trip(clist[11], "Rebeka", 15, 47, 4));

    //GetFullIncome test
    std::cout<<"GetFullIncome:"<<std::endl;
    std::cout<<"GetFullIncome: "<<tlist.GetFullIncome()<<std::endl;
    std::cout<<"GetFullIncome of car8: "<<tlist.GetFullIncome(clist[8])<<std::endl;
    std::cout<<std::endl;

    //GetFullDistance
    std::cout<<"GetFullDistance:"<<std::endl;
    std::cout<<"GetFullDistance: "<<tlist.GetFullDistance()<<std::endl;
    std::cout<<"GetFullDistance of car0: "<<tlist.GetFullDistance(clist[8])<<std::endl;
    std::cout<<std::endl;

    //ListTrip
    //ModifyDistrict teszt
    std::cout<<"ListTrip:"<<std::endl;
    tlist.ListTrip();
    std::cout<<std::endl;

}
