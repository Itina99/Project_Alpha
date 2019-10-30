#include <SFML/Graphics.hpp>
#include <GameStates.h>
#include <Level.h>
#include <iostream>
#include <Menu.h>
#include <Input.h>
#include "Pause.h"
#include "DeathScreen.h"
#include "AchievementScreen.h"
#include "NextLevelScreen.h"
#include "LevelManager.h"


int main() {

    GameStates stateChecker = GameStates::Main_menu;
    GameLogic logic;
    LevelManager levelManager(&logic);
    int resetcheckMenu = 1;
    int resetcheckRestart = 0;
    int nextLevel = 0;
    Menu menu;
    Pause pauseMenu;
    DeathScreen deathScreen;
    NextLevelScreen nextLevelScreen;
    AchievementScreen achievementScreen;

    sf::Event event{};
    Input KeyBoardInput;

    //---------Loop di gioco------------//

    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Game");

    while (window.isOpen()) {
        window.setView(levelManager.currentLevel->camera);
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            levelManager.currentLevel->camera.setCenter(400,300);
            //----Gestione input----//
            if (event.type == sf::Event::KeyPressed) {
                KeyBoardInput = Input::Null;
                if (event.key.code == sf::Keyboard::Down) {
                    KeyBoardInput = Input::Down;
                }
                if (event.key.code == sf::Keyboard::Up) {
                    KeyBoardInput = Input::Up;
                }
                if (event.key.code == sf::Keyboard::Enter) {
                    KeyBoardInput = Input::Enter;
                }
                if (event.key.code == sf::Keyboard::Escape) {
                    KeyBoardInput = Input::Escape;
                }


                //----Update dei menù solo in caso di input avvenuto----//
                if (stateChecker == GameStates::AchievementScreen) {
                    achievementScreen.update(&KeyBoardInput, &stateChecker);
                }
                if (stateChecker == GameStates::Main_menu) {
                    menu.update(&KeyBoardInput, &stateChecker, &window);
                }

                if (stateChecker == GameStates::Level_next) {
                    nextLevelScreen.update(&KeyBoardInput, &stateChecker, &window);
                    if ((nextLevelScreen.selected == nextLevel) && KeyBoardInput == Input::Enter) {
                        levelManager.nextLevel();
                    }
                }
                if (stateChecker == GameStates::Pause) {
                    pauseMenu.update(&KeyBoardInput, &stateChecker, &window);
                    if ((pauseMenu.selected == resetcheckMenu) && KeyBoardInput == Input::Enter) {
                        levelManager.resetLevel();
                    }
                }
                if (stateChecker == GameStates::Dead) {
                    deathScreen.update(&KeyBoardInput, &stateChecker, &window);
                    if ((deathScreen.selected == resetcheckMenu || deathScreen.selected == resetcheckRestart)
                        && KeyBoardInput == Input::Enter) {
                        levelManager.resetLevel();
                    }
                }
            }

        }

        if (stateChecker == GameStates::Level) {
            levelManager.currentLevel->Update(&window, &KeyBoardInput, &stateChecker);
            if (levelManager.currentLevel->reset) {
                stateChecker = GameStates::Dead;
                levelManager.resetLevel();
            }
        }
        if (stateChecker == GameStates::Main_menu) {
            menu.drawMenu(&window);
        }
        if (stateChecker == GameStates::Pause) {
            pauseMenu.drawMenu(&window);
        }
        if (stateChecker == GameStates::Dead) {
            deathScreen.drawMenu(&window);
        }
        if (stateChecker == GameStates::AchievementScreen) {
            achievementScreen.drawAchievements(&logic.achievementNotifier, &window);
        }
        if (stateChecker == GameStates::Level_next) {
            nextLevelScreen.drawMenu(&window);
        }
        window.display();
        window.clear(sf::Color(10, 108, 180));
    }
}