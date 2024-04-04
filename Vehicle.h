#include<iostream>
#include<ctime>
#ifndef VEHICLE_H
#define VEHICLE_H


class Vehicle{
    protected:
    std::time_t timeOfEntry;
    int ID;


    public:
    Vehicle(int ID);


    int getID(){
        return ID;
    }

     virtual int getParkingDuration(){
        return (time(NULL)- timeOfEntry);

     }

};
#endif
