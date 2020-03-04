//
// Created by davide on 19/10/19.
//

#include "Pause.h"
#include "../StateMachine/State_Level.h"
#include "../StateMachine/State_Main.h"

Pause::Pause() {
    text1Pos.x = 100;
    text1Pos.y = 100;
    text2Pos.x = 100;
    text2Pos.y = 130;
    text3Pos.x = 100;
    text3Pos.y = 160;
    titlePos.x = 150;
    titlePos.y = 50;

    this->Font.loadFromFile("textures/arial_narrow_7.ttf");

    pause[0].setFont(this->Font);
    pause[0].setCharacterSize(textSize);
    pause[0].setFillColor(sf::Color::Red);
    pause[0].setPosition(text1Pos.x, text1Pos.y);
    pause[0].setString("RESUME");

    pause[1].setFont(this->Font);
    pause[1].setCharacterSize(textSize);
    pause[1].setFillColor(sf::Color::White);
    pause[1].setPosition(text2Pos.x, text2Pos.y);
    pause[1].setString("MAIN MENU");

    pause[2].setFont(this->Font);
    pause[2].setCharacterSize(textSize);
    pause[2].setFillColor(sf::Color::White);
    pause[2].setPosition(text3Pos.x, text3Pos.y);
    pause[2].setString("EXIT");

    text.setFont(this->Font);
    text.setCharacterSize(textSize);
    text.setFillColor(sf::Color::Black);
    text.setPosition(titlePos.x, titlePos.y);
    text.setString("PAUSE");
}

void Pause::update(Input input, StateManager *state, sf::RenderWindow *window) {
    if (input == Input::Down) {
        selected++;
        if (selected < SIZE) {
            pause[selected - 1].setFillColor(sf::Color::White);
        } else {
            selected--;
        }
        pause[selected].setFillColor(sf::Color::Red);
    }
    if (input == Input::Up) {
        selected--;
        if (selected >= 0) {
            pause[selected + 1].setFillColor(sf::Color::White);
        } else {
            selected++;
        }
        pause[selected].setFillColor(sf::Color::Red);
    }
    if (input == Input::Enter) {
        if (selected == 0) {
            state->setState(new State_Level(state));
        }

        if (selected == 1) {
            delete state;
            state->setState(new State_Main(state));
        }
        if (selected == 2) {
            window->close();
        }
    }
}

void Pause::drawPause(sf::RenderWindow *window) {

    for (int i = 0; i < SIZE; i++) {
        window->draw(this->pause[i]);
    }
    window->draw(text);
}