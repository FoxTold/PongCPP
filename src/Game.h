//
// Created by Tomasz Rybiński on 08/03/2024.
//

#ifndef PONG_GAME_H
#define PONG_GAME_H
#include "SFML/Graphics.hpp"
#include "Player.h"
#include "Utils.h"
#include "Enemy.h"

class Game{
public:
    Game() : _window(sf::RenderWindow{ { 400, 300 }, _title }){
	#ifdef TARGET_OS_MAC
	        _font.loadFromFile("/Library/Fonts/Arial Unicode.ttf");
	#endif
	#ifdef WIN32
            _font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf");
#endif

        _scoreboard.setFont(_font);
    };
    Game(Game&) = delete;
    Game(Game&&) = delete;
    void start();
private:
    void render();
    void drawUI();
private:
    std::string _title = "Pong Game";

    uint32_t playerScore = 0;
    uint32_t botScore = 0;

    sf::RenderWindow _window;

    Player _player{0,0};
    Enemy _enemy {300,0};
    sf::Font _font;
    sf::Text _scoreboard;
};
#endif //PONG_GAME_H
