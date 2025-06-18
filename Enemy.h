// Enemy.h : 
// 

#include "MovingObject.h"

enum class PowerUpType
{
    FireAbility,
    IceAbility,
    SparkAbility,
    SwordAbility
};

class Enemy : public MovingObject
{
public:
    virtual void move();
    void update(float deltaTime) override;
    void draw(Renderer& renderer) override;

private:
    int m_health;
    PowerUpType powerUpToGrant; // enum or similar to specify the ability it gives
};
