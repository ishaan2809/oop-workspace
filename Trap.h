#ifndef TRAP_H
#define TRAP_H
#include "Cell.h"
#include "Effect.h"
class Trap : public Cell , public Effect{
    protected:
    bool active;
    public:
    Trap(int x, int y): Cell(x,y,'T'){
        active = true;
    }

    bool isActive(){
        if (active){
            return true;
        }
        else{
            return false;
        }
    }
    void apply(Cell& cell){
        cell.setType('T');
        active = false;
    }
    
    

};
#endif