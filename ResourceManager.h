// ResourceManager.h : load textures once and provide references, avoiding redundant loads
// Manages loading, storing, and providing access to game resources such as textures, sounds, and fonts.

class ResourceManager
{
public:
	void loadTexture(const std::string& name, const std::string& filePath);
	void loadSound(const std::string& name, const std::string& filePath);
	void loadFont(const std::string& name, const std::string& filePath);
	sf::Texture& getTexture(const std::string& name);
	sf::SoundBuffer& getSound(const std::string& name);
	sf::Font& getFont(const std::string& name);
	void clearResources();
private:
	std::map<std::string, sf::Texture> m_textures;
	std::map<std::string, sf::SoundBuffer> m_sounds;
	std::map<std::string, sf::Font> m_fonts;
};