//
// Created by andreatadde on 17/09/19.
//

#ifndef GAME_BULLET_H
#define GAME_BULLET_H

#include "RectangleShape.h"

//Classe proiettile
class Bullet : public RectangleShape {
public:
    Bullet(bool isPoweredUp, sf::Vector2f shootingDirectionInput);

    void fire();//Metodo per muovere il proiettile

    int damage = 1;
    float bulletLife = 100.f;//distanza massima proiettile
    float bulletSpeed = 0.7f;//velocità del proiettile

private:
    sf::Vector2f shootingDirection;//direzione
    int spriteDirectionLeft = 180;
    int spriteDirectionUp = -90;
    int spriteDirectionDown = 90;
    float bulletLifeMultiplier = 3.f;
};


#endif //GAME_BULLET_H
