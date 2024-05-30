#ifndef GAME_H
#define GAME_H
#include "Cell.h"
#include "Character.h"
#include "Effect.h"
#include "Trap.h"
#include "Utils.h"
#include <tuple>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class GameSession{
    private:
        std::vector<Cell*> grid;
        int gridWidth; 
    public: 
        std::vector<Cell*>& getGrid(){
            return grid;
        }
        void initGameSessioninitGame(int numCharacters, int numTraps, int gridWidth, int gridHeight){
            for(int i = 0; i < numCharacters; i++){
                tuple<int,int> pos = Utils::generateRandomPos(gridWidth,gridHeight);
                Character* character = new Character(get<0>(pos),get<1>(pos));
                grid.push_back(character);
            }

            for(int i = 0; i < numTraps; i++){
                tuple<int,int> pos = Utils::generateRandomPos(gridWidth,gridHeight);
                Trap* trap = new Trap(get<0>(pos),get<1>(pos));
                grid.push_back(trap);
            }
            this->gridWidth = gridWidth;
        }
        void gameLoop(int maxIterations, double trapActivationDistance){
            for(int i = 0; i < maxIterations; i++){
                for(auto obj:grid){
                    if(obj->getType() == 'C'){
                        Character* character = static_cast<Character*>(obj);
                        character->move(1,0);
                    }
                }

                for(auto obj:grid){
                    if(obj->getType() == 'C'){
                        Character* character = static_cast<Character*>(obj);
                        tuple<int,int> pos1 = character->getPos();
                        for(auto obj:grid){
                            if(obj->getType() == 'T'){
                                Trap* trap = static_cast<Trap*>(obj);
                                tuple<int,int> pos2 = trap->getPos();
                                
                                double dist = Utils::calculateDistance(pos1,pos2);

                                if(dist <= trapActivationDistance){
                                    trap->apply(*character); 
                                    if(get<0>(character->getPos()) > gridWidth){
                                    cout << "Character has won the game!" << endl;
                                    break;
                        }
                                }



                            }
                        }
                        
                    }

                    
                }
                
            }
            cout << " maximum number of iterations is reached and no character won." << endl;
                
            
  
        }
};

#endif