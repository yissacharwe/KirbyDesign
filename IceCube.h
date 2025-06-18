// IceCube.h :
//

#include "Enemy.h"

class IceCube : public Enemy
{
public:
    virtual void move();
    void attack();
    void update(float deltaTime) override;
    void draw(Renderer& renderer) override;
};
