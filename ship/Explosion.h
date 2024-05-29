#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity , public Effect{
public:
    Explosion(int x, int y);
    void Apply(GameEntity& Entity);
};
#endif