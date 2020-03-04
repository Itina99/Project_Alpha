//
// Created by davide on 18/09/19.
//
#include "Level.h"
#include <iostream>
#include "Input.h"

Level::Level(int levelArray[], int column, int row) {

    size_of_enemy.x = 32;
    size_of_enemy.y = 32;
    size_of_platform.x = 32;
    size_of_platform.y = 32;
    size_of_bullet.x = 10;
    size_of_bullet.y = 10;
    size_of_player.x = 32;
    size_of_player.y = 32;
    size_of_powerUp.x = 32;
    size_of_powerUp.y = 32;

    shotgunBuffer.loadFromFile("Music/Gun.wav");
    shotgun.setBuffer(shotgunBuffer);
    shotgun.setVolume(15.f);

//-----Creazione vettori di oggetti----------------//

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (levelArray[(i * column) + j] == type_enemy_octopus) {
                Enemy newEnemy;
                newEnemy.init(j * size_of_tile, i * size_of_tile, size_of_enemy);
                vector_of_enemy.push_back(newEnemy);
            }

            if (levelArray[(i * column) + j] == type_grass) {
                Platform newPlatform(type_grass);
                newPlatform.init(j * size_of_tile, i * size_of_tile, size_of_platform);
                vector_of_platform.push_back(newPlatform);
            }

            if (levelArray[(i * column) + j] == type_dirt) {
                Platform newPlatform(type_dirt);
                newPlatform.init(j * size_of_tile, i * size_of_tile, size_of_platform);
                vector_of_platform.push_back(newPlatform);
            }

            if (levelArray[(i * column) + j] == type_invisible) {
                Platform newPlatform(type_invisible);
                newPlatform.init(j * size_of_tile, i * size_of_tile, size_of_platform);
                vector_of_platform.push_back(newPlatform);
            }

            if (levelArray[(i * column) + j] == type_platform_left) {
                Platform newPlatform(type_platform_left);
                newPlatform.init(j * size_of_tile, i * size_of_tile, size_of_platform);
                vector_of_platform.push_back(newPlatform);
            }
            if (levelArray[(i * column) + j] == type_platform) {
                Platform newPlatform(type_platform_right);
                newPlatform.init(j * size_of_tile, i * size_of_tile, size_of_platform);
                vector_of_platform.push_back(newPlatform);
            }
            if (levelArray[(i * column) + j] == type_platform_right) {
                Platform newPlatform(type_platform_right);
                newPlatform.init(j * size_of_tile, i * size_of_tile, size_of_platform);
                vector_of_platform.push_back(newPlatform);
            }
            if (levelArray[(i * column) + j] == type_log) {
                Platform newPlatform(type_log);
                newPlatform.init(j * size_of_tile, i * size_of_tile, size_of_platform);
                vector_of_platform.push_back(newPlatform);
            }

            if (levelArray[(i * column) + j] == type_powerUpBullet) {
                PowerUp newPowerUp(type_powerUpBullet);
                newPowerUp.init(j * size_of_tile, i * size_of_tile, size_of_powerUp);
                vector_of_powerUp.push_back(newPowerUp);
            }
            if (levelArray[(i * column) + j] == type_powerUpSpeed) {
                PowerUp newPowerUp(type_powerUpSpeed);
                newPowerUp.init(j * size_of_tile, i * size_of_tile, size_of_powerUp);
                vector_of_powerUp.push_back(newPowerUp);
            }

            if (levelArray[(i * column) + j] == type_player) {
                player.init(j * size_of_tile, i * size_of_tile, size_of_player);
            }
        }
    }
    reset = false;
    shoot_time = sf::seconds(0);
    clock.restart();

    // Background settings
    backTexture.loadFromFile("textures/background.png");
    background.setTexture(backTexture);
    background.setPosition(-1000,-550);
    background.setScale(2.0,1);

    // Camera settings
    cameraSize.x = sf::VideoMode::getDesktopMode().width;
    cameraSize.y = sf::VideoMode::getDesktopMode().height;
    cameraZoom = 720 / cameraSize.y;
    camera.setSize(cameraSize);
    camera.zoom(cameraZoom);

    setTextures();
}

void Level::Update(sf::RenderWindow *window) {

    sf::Time shoot_delay;
    sf::Vector2f shotDir;
    shoot_delay = sf::seconds(0.5);
    bool shoot = false;

//----Aggiornamento parametri da input-----//

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        shotDir.x = 1;
        shotDir.y = 0;
        shoot = true;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        shotDir.x = -1;
        shotDir.y = 0;
        shoot = true;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        shotDir.x = 0;
        shotDir.y = -1;
        shoot = true;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        shotDir.x = 0;
        shotDir.y = 1;
        shoot = true;
    }
    //-----Creazione proiettili------------//
    if (shoot && clock.getElapsedTime() - shoot_time >= shoot_delay) {
        Bullet newBullet(player.getIsPowerBullet(), shotDir);
        newBullet.init(player.rectShape.getPosition().x + player.rectShape.getSize().x / 2 -
                       newBullet.rectShape.getSize().x / 2,
                       player.rectShape.getPosition().y + player.rectShape.getSize().y / 2 -
                       newBullet.rectShape.getSize().y / 2, size_of_bullet);
        shotgun.play();
        vector_of_bullet.push_back(newBullet);
        setTextures();
        shoot_time = clock.getElapsedTime();
    }

    //------Passa gli oggetti al gestore della logica di gioco (per collisioni ed eventi)-------//

    //----Draw globale-----------//

    window->draw(background);
    drawBullet(window);
    drawPlatform(window);
    drawEnemy(window);
    drawPowerUp(window);
    drawPlayer(window);
}

void Level::drawBullet(sf::RenderWindow *Window) {
    for (int i = 0; i < vector_of_bullet.size(); i++) {
        Window->draw(vector_of_bullet[i].rectShape);
    }

}

void Level::drawEnemy(sf::RenderWindow *Window) {
    for (int i = 0; i < vector_of_enemy.size(); i++) {
        Window->draw(vector_of_enemy[i].rectShape);
    }
}

void Level::drawPlatform(sf::RenderWindow *Window) {
    for (int i = 0; i < vector_of_platform.size(); i++) {
        Window->draw(vector_of_platform[i].rectShape);
    }
}

void Level::drawPlayer(sf::RenderWindow *Window) {
    Window->setView(camera);
    Window->draw(player.rectShape);
}

void Level::drawPowerUp(sf::RenderWindow *Window) {
    for (int i = 0; i < vector_of_powerUp.size(); i++) {
        Window->draw(vector_of_powerUp[i].rectShape);
    }
}

void Level::setTextures() {
    for (int i = 0; i < vector_of_enemy.size(); i++) {
        vector_of_enemy[i].setTexture("textures/octopus-4.png");
    }

    for (int i = 0; i < vector_of_platform.size(); i++) {
        if (vector_of_platform[i].t == type_dirt)
            vector_of_platform[i].setTexture("textures/Platform/4.png");
        if (vector_of_platform[i].t == type_grass)
            vector_of_platform[i].setTexture("textures/Platform/2.png");
        if (vector_of_platform[i].t == type_log)
            vector_of_platform[i].setTexture("textures/Platform/49.png");
        if (vector_of_platform[i].t == type_platform_left)
            vector_of_platform[i].setTexture("textures/Platform/26.png");
        if (vector_of_platform[i].t == type_platform)
            vector_of_platform[i].setTexture("textures/Platform/28.png");
        if (vector_of_platform[i].t == type_platform_right)
            vector_of_platform[i].setTexture("textures/Platform/29.png");
        if (vector_of_platform[i].t == type_invisible)
            vector_of_platform[i].setTexture("textures/Platform/blank.png");
    }


    for (int i = 0; i < vector_of_powerUp.size(); i++) {
        if (vector_of_powerUp[i].type == type_powerUpBullet)
            vector_of_powerUp[i].setTexture("textures/Antidote 1.png");
        if (vector_of_powerUp[i].type == type_powerUpSpeed)
            vector_of_powerUp[i].setTexture("textures/Health Potion 1.png");
    }
    for (int i = 0; i < vector_of_bullet.size(); i++) {
        vector_of_bullet[i].setTexture("textures/bullet3.png");
    }
}