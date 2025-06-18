#pragma once
#include "PowerUp.h"
class SparkAbility : public PowerUp
{
public:
	void activate(Kirby* owner) override;
	void deactivate(Kirby* owner) override;
	void use(Kirby* owner, std::vector<GameObject*>& gameObjects) override;

private:
	bool isActive = false;
};