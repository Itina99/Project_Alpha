#include <utility>


#include <sstream>
#include "GameOverState.hpp"
#include "../GameManager/DEFINITIONS.hpp"
#include "GameState.hpp"
#include "MainMenuState.hpp"
#include "SelectClassState.h"

#include <iostream>

namespace Alpha
{
	GameOverState::GameOverState(GameDataRef data) : _data(std::move(data))
	{
        std::cout<<"GameOverState"<<std::endl;
	}

	void GameOverState::Init()
	{


        this->_background.setTexture(this->_data->assets.GetTexture("GameOverBackground"));
		this->_retryButton.setTexture(this->_data->assets.GetTexture("RetryButton"));
		this->_exitButton.setTexture(this->_data->assets.GetTexture("ExitButton"));


        this->_retryButton.setPosition((this->_data->window.getSize().x/ 2.0) - (this->_retryButton.getGlobalBounds().width / 2), (this->_data->window.getSize().y/ 3) - (this->_retryButton.getGlobalBounds().height / 2));
		this->_exitButton.setPosition((this->_data->window.getSize().x / 2.0) - (this->_exitButton.getLocalBounds().width / 2), (this->_data->window.getSize().y / 3.0 * 2.0) - (this->_exitButton.getLocalBounds().height / 2.0));
	}

	void GameOverState::HandleInput()
	{
		sf::Event event{};

		while (this->_data->window.pollEvent(event))
		{
			if (sf::Event::Closed == event.type)
			{
				this->_data->window.close();
			}

			if (this->_data->input.IsSpriteClicked(this->_retryButton, sf::Mouse::Left, this->_data->window))
			{
				// Switch To Main Menu State By Replacing The Game Over State
                this->_data->machine.AddState(StateRef(new SelectClassState(_data)), true);
                std::cout<<"rimpiazza GameOverState"<<std::endl;
			}

			if (this->_data->input.IsSpriteClicked(this->_exitButton, sf::Mouse::Left, this->_data->window))
			{
				// Switch To Main Menu State By Replacing The Game Over State
				this->_data->machine.AddState(StateRef(new MainMenuState(_data)), true);

			}
		}
	}

	void GameOverState::Update()
	{

	}

	void GameOverState::Draw()
	{

        this->_data->window.draw(this->_background);
		this->_data->window.draw(this->_retryButton);
		this->_data->window.draw(this->_exitButton);


	}

    GameOverState::~GameOverState() = default;
}