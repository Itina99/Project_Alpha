//
// Created by andreatadde on 23/10/19.
//

#ifndef GAME_ENEMY_H
#define GAME_ENEMY_H

#include "GameCharacter.h"
#include "Hero.h"
#include "Platform.h"
#include "SFML/Graphics.hpp"
#include <memory>

class Aggro;
class Enemy : public GameCharacter {
public:
    Enemy();

    void aggroUpdate(Hero* player, sf::Time time, std::vector<Platform> *platform);

    std::shared_ptr<Aggro> aggro;
    int HP = 2;
    int damage = 1;
    sf::Vector2f range;
    //Attack parameters
    sf::Time lastAttackTime = sf::seconds(0);
    sf::Time attackReload = sf::seconds(2);
};


#endif //GAME_ENEMY_H
