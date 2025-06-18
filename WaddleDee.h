// WaddleDee.h
// Simple walking enemy, grants no power-up

#include "Enemy.h"

class WaddleDee : public Enemy
{
public:
    virtual void move();
    void update(float deltaTime) override;
    void draw(Renderer& renderer) override;
private:

};