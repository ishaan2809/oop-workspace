#include "Titan.h"
#include <iostream>
using namespace std;

Titan::Titan(string name, string type, int damage, int hp, int attack, int defense)
    : name(name), type(type), damage(damage), hp(hp), attack(attack), defense(defense) {
}

Titan::~Titan() {
    // Virtual destructor implementation
}

void Titan::setHp(int hp) {
    this->hp = hp;
}

void Titan::setAttack(int attack) {
    this->attack = attack;
}

void Titan::setDamage(int damage) {
    this->damage = damage;
}

void Titan::setType(string type) {
    this->type = type;
}

int Titan::getHp()  {
    return hp;
}

int Titan::getAttack()  {
    return attack;
}

int Titan::getDamage(){
    return damage;
}

string Titan::getType()  {
    return type;
}

int Titan::getDefense()  {
    return defense;
}

string Titan::getName() {
    return name;
}