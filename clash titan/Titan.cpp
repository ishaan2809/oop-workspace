#include "Player.h"
#include "Titan.h"
#include <string>
#include <ctime>
#include <iostream>
using namespace std;

Titan::Titan(string name, string type, int damage, int hp, int attack,int defense)
{
    this-> name = name;
    this -> type = type;
    this -> damage = damage;
    this -> hp = hp;
    this -> attack = attack;
    this -> defense = defense;

}                                                                                                                                           

