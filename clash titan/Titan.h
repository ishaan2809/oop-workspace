#ifndef TITAN_H
#define TITAN_H
#include <iostream>
#include <string>
#include <ctime>

using namespace std;
class Titan{

protected:
    string name;
    string type;
    int damage;
    int hp;
    int attack;
    int defense;

public:
    Titan(string name, string type, int damage, int hp, int attack, int defense);
    virtual void doAttack(int amount);
    virtual void takeDamage(int amount);
    virtual ~Titan();
    void set_Hp();
    void set_attack();
    void set_damage();
    void set_type();
    int get_Hp();
    int get_attack();
    int get_damage();
    int get_type();
    int get_defense();
};
#endif