#include <iostream>
#include "Game.h"


using namespace std;

int main(){

    Game game;
    game.initGame(0, 3, 10, 5);

    vector<Cell*>& getGrid = game.getGrid();

    for(auto obj:grid){
        cout << "type: " << obj->getType() << endl;
        cout << "Position:  "<< obj.get<0>(obj->getPos()) << "," << obj.get<1>(obj->getPos()) <<  endl;
    }

}