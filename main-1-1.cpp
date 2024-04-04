#include <iostream>
#include <ctime>
#include <unistd.h>
#include "Vehicle.h"
#include "car.h"
#include "bus.h"
#include "motorbike.h"

int main() {
    int numCars, numBuses, numMotorbikes;
    std::cout << "Enter number of cars: ";
    std::cin >> numCars;
    std::cout << "Enter number of buses: ";
    std::cin >> numBuses;
    std::cout << "Enter number of motorbikes: ";
    std::cin >> numMotorbikes;

    const int totalVehicles = numCars + numBuses + numMotorbikes;
    Vehicle* vehicles[totalVehicles];

    int idCounter = 1;
    for (int i = 0; i < numCars; ++i) {
        vehicles[i] = new Car(idCounter++);
    }

    for (int i = numCars; i < numCars + numBuses; ++i) {
        vehicles[i] = new Bus(idCounter++);
    }

    for (int i = numCars + numBuses; i < totalVehicles; ++i) {
        vehicles[i] = new Motorbike(idCounter++);
    }

    // Print parking duration for each vehicle
    for (int i = 0; i < totalVehicles; ++i) {
        std::cout << "Vehicle ID: " << vehicles[i]->getID() << ", Parking Duration: " << vehicles[i]->getParkingDuration() << " seconds" << std::endl;
    }

    // Clean up memory
    for (int i = 0; i < totalVehicles; ++i) {
        delete vehicles[i];
    }

    return 0;
}

