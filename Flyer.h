// Flyer.h
// Simple flying enemy, grants no power-up

#include "Enemy.h"

class Flyer : public Enemy
{
public:
    virtual void move();
    void update(float deltaTime) override;
    void draw(Renderer& renderer) override;
private:

};