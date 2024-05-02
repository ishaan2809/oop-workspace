#ifndef AIRCRAFT_H
#define AIRCRAFT_H
class AirCraft{
    protected:
        int weight;
        float fuel;
        int numberOfFlights;
    
    public:
        AirCraft();
        AirCraft(int w);
        void refuel();
        virtual void fly(int headwind, int minutes);
        int get_weight();
        float get_fuel();
        int get_numberOfFlights();
        


}
;
#endif