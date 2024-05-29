#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>

class GameEntity{
    private:
        std::tuple<int, int> position;
        //std::tuple<int, int> ----->  the return type like char  and  position -----> the variable;
        char type;
    
    public:
        GameEntity(int x, int y, char type);
        std::tuple<int, int> getPos();
        char getType();
        void setPos(int x, int y);
        void setType(char type);
    };
#endif