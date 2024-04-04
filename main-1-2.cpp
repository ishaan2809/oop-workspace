#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <string>

int main()
{
    ParkingLot lot(10);
    int vehicleType;
    int id;

    while (lot.getCount() < 10)
    {
        std::cout << "Enter type of vehicle (car, bus, motorbike): ";
        std::cin >> vehicleType;
        std::cin >> id;
        if (vehicleType == 1)
        {
            lot.parkVehicle(new Car(id));
        }
        else if (vehicleType == 2)
        {
            lot.parkVehicle(new Bus(id));
        }
        else if (vehicleType == 3)
        {
            lot.parkVehicle(new Motorbike(id));
        }
        else
        {
            std::cout << "Invalid vehicle type. Please enter car, bus, or motorbike.\n";
        }
    }

    std::cout << "Parking lot is full. Enter ID of vehicle to unpark: ";
    std::cin >> id;
    lot.unparkVehicle(id);

    return 0;
}

