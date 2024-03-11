#include "Enemy.h"
#include "fmt/format.h"
#include <iostream>
void Enemy::draw(sf::RenderWindow &window) {
    window.draw(enemyShape);
}

bool Enemy::checkCollisionWithMap() {
    const auto current = enemyShape.getPosition();
    if (current.y < 0)
        return true;
    if (current.y > 300 - enemyShape.getSize().y)
        return true;
    return false;
}

void Enemy::update() {

    auto position = enemyShape.getPosition();
    position.y = position.y + static_cast<float>(direction) * 5;
    position.x = 400 - enemyShape.getSize().x;
    enemyShape.setPosition({position.x,position.y});
    std::cout<< fmt::format("pos_x: {}, pos_y: {}", position.x,position.y)<<std::endl;
    if(checkCollisionWithMap())
        direction*=-1;
}
