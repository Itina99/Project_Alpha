//
// Created by andreatadde on 18/09/19.
//

#ifndef GAME_HERO_H
#define GAME_HERO_H

#include "GameCharacter.h"
#include "Platform.h"

//Classe addebita alla gestione del giocatore
class Hero : public GameCharacter {
public:
    Hero();
    virtual ~Hero();

    void update(bool W, bool A, bool S, bool D, std::vector<Platform> *platform);//Gestisce il movimento da input da tastiera

    bool getIsPowerBullet() const;
    void setIsPowerBullet(bool isPowerBullet);

    int HP = 5;

private:
    bool isPowerBullet;
    //---Animation variables--//
    float delta_time = 1.0 / 60.f;
    unsigned int frame_x = 3;
    unsigned int frame_y = 9;
};


#endif //GAME_HERO_H
