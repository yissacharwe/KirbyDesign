// GameObject.h : Abstract base class for all game entities
// Provides a common interface and shared properties for all game entities

class GameObject
{
public:
	virtual void update(float deltaTime) = 0;
	virtual void draw(Renderer& renderer) const;
	virtual void onCollision(GameObject* other) {}

	// setters and getters
	void setPosition(const sf::Vector2f& position);
	sf::Vector2f getPosition() const;

	void setSize(const sf::Vector2f& size);;
	sf::Vector2f getSize() const;

	void setTexture(std::shared_ptr<sf::Texture> texture);
	sf::FloatRect getGlobalBounds() const;

protected:
	sf::Vector2f m_position;
	sf::Vector2f m_size;
	sf::Sprite m_sprite;
	b2Body* m_body;
};
