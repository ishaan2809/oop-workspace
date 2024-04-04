#include "ParkingLot.h"
ParkingLot::ParkingLot(int capacity) : capacity(capacity), current(0), vehicles(new Vehicle *[capacity])
{
}
ParkingLot::ParkingLot() : ParkingLot(0)
{
}
int ParkingLot::getCount()
{
    return this->current;
}
void ParkingLot::parkVehicle(Vehicle *vehicle)
{
    if (this->getCount() >= capacity)
    {
        std::cout << "The lot is full" << std::endl;
        return;
    }
    else
    {
        this->vehicles[this->current++] = vehicle;
    }
    return;
}
void ParkingLot::unparkVehicle(int ID)
{
    for (int i = 0; i < this->current; i++)
    {
        if (this->vehicles[i] != nullptr && this->vehicles[i]->getID() == ID)
        {
            delete this->vehicles[i];
            // Shift all the vehicles after this one to fill the gap
            for (int j = i; j < this->current - 1; j++)
            {
                this->vehicles[j] = this->vehicles[j + 1];
            }
            this->vehicles[this->current - 1] = nullptr;
            this->current--;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
    return;
}
int ParkingLot::countOverstayingVehicles(int maxParkingDuration)
{
    int count{0};
    for (int i = 0; i < this->current; i++)
    {
        if (this->vehicles[i]->getParkingDuration() > maxParkingDuration)
        {
            count++;
        }
    }
    return count;
}
ParkingLot::~ParkingLot()
{
    for (int i = 0; i < current; i++)
    {
        delete vehicles[i];
    }
    delete[] vehicles;
}