//
// Created by Tomasz Rybiński on 08/03/2024.
//

#include "Player.h"
#include "Utils.h"
void Player::draw(sf::RenderWindow &window) {
    window.draw(playerShape);
}

void Player::update() {
    makeMove();
    checkCollisionWithMap();

}

void Player::checkCollisionWithMap() {
    const auto current = playerShape.getPosition();

    if (current.y < 0)
        playerShape.setPosition(current.x, 0);
    if (current.y > 300 - playerShape.getSize().y)
        playerShape.setPosition(current.x, 300 - playerShape.getSize().y);
}

void Player::makeMove() {
    const auto prev = playerShape.getPosition();

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        playerShape.setPosition(prev.x, prev.y + 5);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        playerShape.setPosition(prev.x, prev.y - 5);
    }
}
