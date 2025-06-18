// Platform.h :
//
// Role: Static or moving platforms.
// Responsibilites: Collision surfaces for the player and enemies.

#include "Wall.h"
#include "Water.h"

#include "StaticObject.h"

class Platform : public StaticObject
{
public:

private:
	Wall m_wall;
	Water m_water;
};
