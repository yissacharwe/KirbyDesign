// PowerUp.h : Abstract Base Class or Interface
// Encapsulates ability logic. Kirby interacts with this abstract interface

class PowerUp
{
public:
	virtual void activate(Kirby* owner) = 0;
	virtual void deactivate(Kirby* owner) = 0;
	virtual void use(Kirby* owner, std::vector<GameObject*>& gameObjects) = 0;

private:

};