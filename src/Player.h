//
// Created by Tomasz Rybiński on 08/03/2024.
//

#ifndef PONG_PLAYER_H
#define PONG_PLAYER_H
#include <SFML/Graphics.hpp>
class Player{
public:
    Player(float x, float y): x(x), y(y){
        playerShape.setSize({15.f,30.f});
        playerShape.setFillColor(sf::Color::Cyan);
    };

    void draw(sf::RenderWindow& window);
    void update();
private:
    float x;
    float y;

    sf::RectangleShape playerShape{};

    void makeMove();

    void checkCollisionWithMap();
};
#endif //PONG_PLAYER_H
