#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <string>
#include <thread>
#include <chrono>
#include <cstdlib>
int main()
{
    ParkingLot lot(10);
    std::string vehicleType;



    for (int i = 0; i < 5; i++)
    {
        lot.parkVehicle(new Car(std::rand()));
    }

    for (int i = 0; i < 3; i++)
    {
        lot.parkVehicle(new Bus(std::rand()));
    }

    for (int i = 0; i < 2; i++)
    {
        lot.parkVehicle(new Motorbike(std::rand()));
    }

    // Wait for 15 seconds
    std::this_thread::sleep_for(std::chrono::seconds(15));

    int overstayingVehicles = lot.countOverstayingVehicles(15);
    std::cout << "Number of overstaying vehicles: " << overstayingVehicles << std::endl;

    return 0;
}