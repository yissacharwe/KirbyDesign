// Projectile.h : 
// Handles movement, rendering, and collision response for projectiles.

#include "MovingObject.h"

class Projectile : public MovingObject
{
public:
	void update(float deltaTime) override; // moves the projectile
	void draw(Renderer& renderer) override;
	void onHit(GameObject* target);

private:
	sf::Vector2f m_direction;
	float m_speed;
	int m_damage;

};