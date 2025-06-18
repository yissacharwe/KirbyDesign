// Swordsman.h :
//

#include "Enemy.h"

class Swordsman : public Enemy
{
public:
    virtual void move();
    void attack();
    void update(float deltaTime) override;
    void draw(Renderer& renderer) override;
};
