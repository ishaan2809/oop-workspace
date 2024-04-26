#ifndef APPLIANCE_H
#define APPLIANCE_H
class Appliance{
    protected:
    int powerRating;
    bool isOn;

    public:
    Appliance();
    Appliance(int powerRating);
    void turnOn();
    void turnOff();
    int get_powerRating();
    bool get_isOn();
    virtual double getPowerConsumption();
    void set_powerRating(int powerRating);



};
#endif