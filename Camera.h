// Camera.h : Manages the visible area of the game world
//

class Camera
{
public:
	sf::View getView(sf::Vector2u windowSize);
private:
	float m_zoomLevel;
};