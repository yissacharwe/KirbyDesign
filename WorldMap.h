// WorldMap.h : Represents the static environment of the current level
// Responsible for representing and rendering the static layout of a level, and for providing collision and tile information to the rest of the game.

class WorldMap
{
public:
	//void draw()/render();  --> at Renderer::drawWorldMap(const WorldMap& worldMap)
	void updatePhysics(float deltaTime);  // Update physics
	bool loadMapFromFile(const std::string& filePath);  // Load map data
	bool isCollisionAt(const sf::Vector2f& position) const;
private:
	
	sf::Vector2f m_mapSize;
	b2World& m_physicsWorld; // Box2d physics world
	sf::Texture m_backgroundTexture;
};