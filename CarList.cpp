#include "CarList.h"
#include "Car.h"
#include <iostream>
#include "memtrace.h"

void CarList::AddCar(Car* car)
{
	if (carNum >= 100)
		throw "Nem vihetõ fel több jármû.";
	carList[carNum++] = car;
}

void CarList::ListFuel()
{
    for (int i=0;i<carNum;i++)
    {
        std::cout<<"ID: "<<carList[i]->GetId()<<"\tFuel level: "<<carList[i]->PercentFuel()<<"%"<<std::endl;
    }
}

void CarList::ListDistrict()
{
    for (int i=0;i<carNum;i++)
    {
        std::cout<<"ID: "<<carList[i]->GetId()<<"\tDistrict: "<<carList[i]->GetDistrict()<<std::endl;
    }
}

void CarList::ListService()
{
    for (int i=0;i<carNum;i++)
    {
        if (carList[i]->IsService())
            std::cout<<*(carList[i]);
    }
}

Car* CarList::operator[](int idx)
{
    return carList[idx];
}

void CarList::ModifyDistrict()
{
    int counter[12];
    for (int i=0;i<12;i++)
        counter[i]=0;

    for (int i=0;i<carNum;i++)
        counter[carList[i]->GetDistrict()]++;
    int average=carNum/12;

    int maxi=0;
    for (int i=1;i<12;i++)
        if (counter[maxi]<counter[i])
            maxi=i;

    int i=0;
    while (counter[maxi]>average && i<12)
    {
        if (i!=maxi)
        {
            if (counter[i]<average)
            {
                counter[maxi]--;
                counter[i]++;

                std::cout<<"Move one car from Dst."<<maxi+1<<" to Dst."<<i+1<<"."<<std::endl;

                maxi=0;
                for (int j=0;j<12;j++)
                    if (counter[j]>counter[maxi])
                        maxi=j;
            }
            else
                i++;
        }
        else
            i++;
    }
}

