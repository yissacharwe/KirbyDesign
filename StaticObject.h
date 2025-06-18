// StaticObject.h :
//

#include "GameObject.h"

class StaticObject : public GameObject
{
public:
    void draw(Renderer& renderer) const override;
    virtual void onCollision(GameObject* other) override;
    //sf::FloatRect getGlobalBounds() const override;

protected:
    sf::Vector2f m_position;
    sf::Vector2f m_size;
    std::shared_ptr<sf::Texture> m_texture;
    sf::Sprite m_sprite;
    bool m_isSolid;
};