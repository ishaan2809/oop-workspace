#include "GameEntity.h"
#include "Effect.h"
#include "Explosion.h"

Explosion::Explosion(int x, int y): GameEntity(x, y, 'E'){}
void Explosion::Apply(GameEntity& Entity){
    Entity.setPos(-1,-1);
    Entity.setType('X');

}
