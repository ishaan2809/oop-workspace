#include <iostream>
#include "Game.h"


using namespace std;

int main(){

    Game game;
    game.initGame(0, 3, 10, 5);

    vector<Cell*>& grid = game.getGrid();

    for(auto obj:grid){
        cout << "type: " << obj->getType() << endl;
        cout << "Position:  "<< get<0>(obj->getPos()) << "," << get<1>(obj->getPos()) <<  endl;
    }

}