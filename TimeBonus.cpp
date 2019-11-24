//
// Created by Magna on 2019-06-07.
//

#include "TimeBonus.h"
#include "Game.h"

TimeBonus::TimeBonus(double _timeEarned, double _posX, double _posY, double _width, double _height, float _angle,
                     std::string _texture) : Item(_posX,
                                                  _posY,
                                                  _width,
                                                  _height, _angle,
                                                  _texture), timeEarned(_timeEarned) {}

double TimeBonus::getTimeEarned() const {
    return timeEarned;
}

void TimeBonus::setTimeEarned(double timeEarned) {
    TimeBonus::timeEarned = timeEarned;
}

void TimeBonus::doSpecial() {
    std::cout << "Special! " << this->timeEarned << " seconds earned" << std::endl;
    Game::gameData->match->getTimer()->decrementTimer(this->timeEarned);
    setTaken(true);

}