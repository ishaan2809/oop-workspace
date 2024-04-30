#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H
class AirVehicle{
    protected:
       int weight;
       float fuel;
       int numberofFlights;
    
    public:
         AirVehicle();
         AirVehicle(int w);
         void refuel();
         void fly(int headwind, int minutes);
         void set_weight(int w);
         int get_weight();
         void set_fuel(float f);
         float get_fuel();
         int get_numberofFlights();

         

    

};
#endif