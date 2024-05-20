#include "Player.h"
#include "Titan.h"
#include "Atlas.h"
using namespace std;
Atlas::Atlas(string name, string type, int damage, int hp, int attack,int defense) :  Titan(name, type, damage, hp, attack, defense) 
{


    this-> name = "Atlas";
    this -> type = "Earth";
    this -> damage = 100;
    this -> hp = 100;
    this -> attack = 100;
    this -> defense = 100;

}                                                                                                                                           


void Atlas::doAttack(int amount){
    // implementation of the code
}
void Atlas::takeDamage(int amount) {
    // implentation of the code
}

