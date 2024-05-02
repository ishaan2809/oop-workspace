#include "AirCraft.h"
#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <string>
using namespace std;
class Helicopter : public AirCraft{
    private:
        string name;

    public:
        Helicopter(int w, string n); 
        void fly(int headwind, int minutes);
        string get_name();


        
    




};
#endif