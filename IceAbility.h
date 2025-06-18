#pragma once  
#include "PowerUp.h"  
#include "Kirby.h"  
#include "GameObject.h"  
#include <vector>  

class IceAbility : public PowerUp  
{  
public:  
   void activate(Kirby* owner) override;  
   void deactivate(Kirby* owner) override;  
   void use(Kirby* owner, std::vector<GameObject*>& gameObjects) override;  

private:  
   bool isActive = false;  
};
