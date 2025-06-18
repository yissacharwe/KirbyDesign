// Sparky.h : Enemy entity
// Short-Range attacks

#include "Enemy.h"

class Sparky : public Enemy
{
public:
    virtual void move();
    void attack();
    void update(float deltaTime) override;
    void draw(Renderer& renderer) override;
};

