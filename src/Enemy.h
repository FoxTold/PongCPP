//
// Created by Tomasz Rybiński on 10/03/2024.
//

#ifndef PONG_ENEMY_H
#define PONG_ENEMY_H
#include "SFML/Graphics.hpp"


class Enemy {
public:
    Enemy(float x, float y): x(x), y(y){
        enemyShape.setSize({15.f,30.f});
        enemyShape.setFillColor(sf::Color::Red);
    };

    void draw(sf::RenderWindow& window);
    void update();
private:
    float x;
    float y;
    int direction = 1;
    sf::RectangleShape enemyShape{};

    bool checkCollisionWithMap();
};


#endif //PONG_ENEMY_H
