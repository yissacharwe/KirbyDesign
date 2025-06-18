// GameController.h : 
// 

class GameController
{
public:
	void run();
	void update(float deltaTime) { m_levelManager::update(deltaTime); }
	void handle();
	void draw(Renderer& renderer) const { m_levelManager::draw(Renderer& renderer); }

private:
	float m_deltaTime;
	sf::Clock m_deltaClock;
	sf::RenderWindow m_window;

	b2World m_world;
	Renderer m_renderer;
	LevelManager m_currentLevel;
};
