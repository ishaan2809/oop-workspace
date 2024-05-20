#include "Player.h"
#include "Titan.h"
#include "Gaia.h"
using namespace std;
Gaia::Gaia(string name, string type, int damage, int hp, int attack,int defense) :  Titan(name, type, damage, hp, attack, defense) 
{


    this-> name = "Gaia";
    this -> type = "ice";
    this -> damage = 100;
    this -> hp = 100;
    this -> attack = 100;
    this -> defense = 100;

}                                                                                                                                           


void Gaia::doAttack(int amount){
    // implementation of the code
}
void Gaia::takeDamage(int amount) {
    // implentation of the code
}
