// Renderer.h :

// Role: Draws all visible objects to the screen.
// Responsibilities: Handles sprite rendering, camera scrolling, UI.

class Renderer
{
    // Draw the static world map (tiles, terrain)
    void drawWorldMap(const WorldMap& worldMap);

    // Draw all dynamic objects in the level (player, enemies, platforms, power-ups)
    void drawGameObjects(const LevelManager& levelManager);

    // Draw the UI (HUD, menus, overlays)
    void drawUI(const UIManager& uiManager);

    // Present the final frame
    void display();

    // Clear the screen for a new frame
    void clear(const sf::Color& color = sf::Color::Black);

    // Access to resource manager for textures, fonts, etc.
   //  ResourceManager& getResourceManager();

private:
    sf::RenderWindow& m_window;
    ResourceManager& m_resourceManager;
    Camera m_camera;
};