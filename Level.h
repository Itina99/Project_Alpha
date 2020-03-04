//
// Created by davide on 18/09/19.
//

#ifndef GAME_LEVEL_H
#define GAME_LEVEL_H

#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include "Platform.h"
#include "Enemy.h"
#include "Hero.h"
#include "PowerUp.h"
#include "Bullet.h"

//Classe per la creazione del livello

class Level {
public:
    explicit Level(int levelArray[], int column, int row);//Crea il livello mettendo tutti i tipi di oggetti nei vettori assegnati e ne setta le propietà

    void Update(sf::RenderWindow *window);//Prende l'input da tastiera

    //--Draw di tutti gli oggetti--//
    void drawBullet(sf::RenderWindow *Window);
    void drawEnemy(sf::RenderWindow *Window);
    void drawPlayer(sf::RenderWindow *Window);
    void drawPlatform(sf::RenderWindow *Window);
    void drawPowerUp(sf::RenderWindow *Window);

    void setTextures();//Get texture globale

    //-----Vettori di oggetti------//
    std::vector<Platform> vector_of_platform;
    std::vector<Enemy> vector_of_enemy;
    std::vector<PowerUp> vector_of_powerUp;
    std::vector<Bullet> vector_of_bullet;
    //--------------//
    Hero player;
    sf::Clock clock;
    sf::View camera;
    bool reset;

private:
    sf::Vector2f size_of_enemy;
    sf::Vector2f size_of_platform;
    sf::Vector2f size_of_bullet;
    sf::Vector2f size_of_player;
    sf::Vector2f size_of_powerUp;

    int size_of_tile = 32;
    int type_invisible = 99;
    int type_grass = 1;
    int type_dirt = 2;
    int type_platform_left = 10;
    int type_platform = 11;
    int type_platform_right = 12;
    int type_log = 3;
    int type_powerUpBullet = 5;
    int type_powerUpSpeed = 6;
    int type_player = 9;
    int type_enemy_octopus = 7;

    float cameraZoom;
    sf::Vector2f cameraSize;

    sf::Time shoot_time;

    sf::Sprite background;
    sf::Texture backTexture;

    sf::SoundBuffer shotgunBuffer;
    sf::Sound shotgun;
};


#endif //GAME_LEVEL_H
