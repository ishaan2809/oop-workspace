#include "Player.h"
#include "Titan.h"
#ifndef OCEANIA_H
#define OCEANIA_H
using namespace std;
class Oceania: public Titan{
    public:
    Oceania(string name, string type, int damage, int hp, int attack,int defense);
    void doAttack(int amount);
    void takeDamage(int amount);



};
#endif