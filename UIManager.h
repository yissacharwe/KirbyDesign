// UIManger.h : 
// 

class UIManager
{
public:
	void drawHUD(sf::RenderWindow& window);
	
private:
	sf::Font m_font;  // Font for text rendering
	sf::Texture m_menuBackground;  // Background texture for menus
	sf::Sprite m_menuSprite;  // Sprite for menu background
};