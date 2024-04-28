#include <iostream>
#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance{

    protected:
        int powerRating;
        bool isOn;
    public:
        void turnOn();

        void set_powerRating(int powerRating);
        void turnOff();
        Appliance();
        Appliance(int powerRating);
        int get_powerRating();
        bool get_isOn();
        virtual double getPowerConsumption();





        


};
#endif