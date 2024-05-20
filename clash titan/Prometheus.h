#include "Player.h"
#include "Titan.h"
#ifndef PROMETHEUS_H
#define PROMETHEU_H
using namespace std;
class Prometheus: public Titan{
    public:
    Prometheus(string name, string type, int damage, int hp, int attack,int defense);
    void doAttack(int amount);
    void takeDamage(int amount);
};
#endif