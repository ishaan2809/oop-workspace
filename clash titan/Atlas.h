#include "Player.h"
#include "Titan.h"
#ifndef ATLAS_H
#define ATLAS_H
using namespace std;
class Atlas: public Titan{
    public:
    Atlas(string name, string type, int damage, int hp, int attack,int defense);
    void doAttack(int amount);
    void takeDamage(int amount);



};
#endif