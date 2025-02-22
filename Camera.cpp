//
// Created by matteo on 22/02/21.
//


#include "Camera.h"

Camera::Camera() {
    reset(sf::FloatRect(position.x, position.y, 3840, 2160));
    setViewport(sf::FloatRect(0, 0, 1.0f, 1.0f));

}

void Camera::update(const Hero& hero, const Alpha::GameDataRef& data) {
    position.x = hero.getPosition().x + 20 - (data->window.getSize().x / 2.0);
    position.y = hero.getPosition().y + 20 - (data->window.getSize().y / 2.0);

    if (position.x < 0){
        position.x = 0;
    }else{
        this->isMoving = true;
    }
    if (position.y < 0){
        position.y = 0;
    }else{
        this->isMoving = true;
    }

    reset(sf::FloatRect(position.x, position.y, 3840, 2160));
    data->window.setView(*this);
}

void Camera::resetCamera(const Alpha::GameDataRef& data) {

    reset(sf::FloatRect(0, 0,data->window.getSize().x,data->window.getSize().y));
    data->window.setView(*this);

}

const sf::Vector2f &Camera::getPosition() const {
    return position;
}


Camera::~Camera() = default;
