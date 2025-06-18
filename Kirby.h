// Kirby.h : The player character
// Implements player-specific actions (inhale, swallow, spit, fly) and power-up management.

#include "MovingObject.h"

class Kirby : public MovingObject
{
public:
    void move(float deltaTime) override;
    void update(float deltaTime) override;
    void draw(Renderer& renderer) const;

    void inhale();
    void swallow(); // --> has if(equipped) { useAbility() } inside;
    void spit();
    void fly();

    
    void equipPowerUp(PowerUp* powerUp);
    void handleInput(sf::Event event);

private:
    std::unique_ptr<PowerUp> m_currentPowerUp;
    int m_health;
};

