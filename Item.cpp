//
// Created by waris on 20/06/19.
//

#include <iostream>
#include "Item.h"
#include "PlayerType.h"
#include "Hero.h"

//constructor
Item::Item(bool S,bool E, bool G, bool HP, bool P, bool K):strength(S), exhaust(E), generic(G), life(HP), poison(P), key(K){}

//destructor
Item::~Item() = default;

//getters
bool Item::isStrength() const {
    return strength;
}

bool Item::isLife() const {
    return life;
}

bool Item::isKey() const {
    return key;
}

bool Item::isGeneric() const {
    return generic;
}

bool Item::isExhaust() const {
    return exhaust;
}

bool Item::isPoison() const {
    return poison;
}

//functions
void Item::use( Hero* hero, std::vector<Tile>* tile_vector) {

    if (isStrength()){
    }else if(isGeneric()) {
        switch(hero->playerType){
            case PlayerType ::KNIGHT:{
                hero->setArmor(hero->getArmor()+3);
                break;
            }
            case PlayerType::MAGE:{
                hero->setMana(hero->getMana()+10);
                break;
            }
            case PlayerType::ARCHER:{
                hero->setArrow(hero->getArrow()+10);
            }
        }
    }else if (isLife()){
        hero->setLife(hero->getLife() + 2);

    }else if(isKey()){

        for(auto &i: *tile_vector)
            if(i.t == LEFT_FRONT_DOOR || i.t == RIGHT_FRONT_DOOR || i.t == LEFT_SIDE_DOOR || i.t == RIGHT_SIDE_DOOR){
                i.openGate();
            }

    }else if(isExhaust()){
        hero->setStrength(hero->getStrength()-1);

    }else if(isPoison()){
        hero->setLife(hero->getLife()-1);
    }
}