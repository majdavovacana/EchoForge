#ifndef GAME_HPP
#define GAME_HPP
#include "Entity.hpp"
#include <SFML/Graphics.hpp>
#include <vector>
#include <memory>

class Game {
private:
    sf::RenderWindow& window;
    std::vector<std::vector<char>> level; // 'W'=wall, ' '=path, 'S'=switch, 'E'=exit
    std::vector<std::unique_ptr<Entity>> entities; // Players, switches, exit
    sf::Vector2f primaryPos;
    sf::Vector2f secondaryPos;
    bool isExitActive;

public:
    Game(sf::RenderWindow& win);
    void handleEvents();
    void update(float deltaTime);
    void render();
};

#endif // GAME_HPP