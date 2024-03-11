#include "Game.h"
#include "fmt/format.h"
void Game::start() {
    _window.setFramerateLimit(60);
    while(_window.isOpen())
    {
        for (auto event = sf::Event{}; _window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                _window.close();
            }
        }
        render();
        _player.update();
        _enemy.update();
    }
}

void Game::render() {

    _window.clear();
    _player.draw(_window);
    _enemy.draw(_window);
    drawUI();
    _window.display();

}

void Game::drawUI() {

    _scoreboard.setString(fmt::format("{}:{}",playerScore,botScore));
    _scoreboard.setPosition(170,0);
    _window.draw(_scoreboard);

}


