#include "Game.h"

void Game::initVariables()
{
	this->window = nullptr;
}

void Game::initWindow()
{
	this->videoMode.height = 720;
	this->videoMode.width = 1280;
	//this->videoMode.getDesktopMode //Get Desktop Resolution
	this->window = new sf::RenderWindow(sf::VideoMode(1280, 720), "Agent Zero", sf::Style::Titlebar | sf::Style::Close);
}

Game::Game()
{
	this->initVariables();
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}

//Accessors

const bool Game::getWindowIsOpen() const
{
	return this->window->isOpen();
}

void Game::update()
{

}

void Game::render()
{

}
