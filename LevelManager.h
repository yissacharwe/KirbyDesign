// LevelManager.h :
// 

class LevelManager
{
public:
    // Loads platform layout, enemy positions, etc. from a file
    bool load(const std::string& filename);

	void update(float deltaTime); // Updates all game objects in the level
    void draw(Renderer& renderer) const; // Renders all game objects in the level
    void nextLevel();
    void reset();

    Kirby& getKirby();
    const std::vector<std::unique_ptr<Enemy>>& getEnemies() const;

private:
    WorldMap m_worldMap;
    std::unique_ptr<Kirby> m_kirby;
    std::vector<std::unique_ptr<Enemy>> m_enemies;
    std::vector<std::unique_ptr<Platform>> m_platforms;
    std::vector<std::unique_ptr<PowerUp>> m_powerUps;
    std::string m_levelName;
};