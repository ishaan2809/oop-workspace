#include "Player.h"
#include "Titan.h"
#ifndef GAIA_H
#define GAIA_H
using namespace std;

class Gaia : public Titan{
public:
    Gaia(string name, string type, int damage, int hp, int attack,int defense);
    void doAttack(int amount);
    void takeDamage(int amount);
    
};


#endif
