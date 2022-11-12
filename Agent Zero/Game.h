#include "stdafx.h"

class Game
{
private:
	//Variables
	//Window
	sf::RenderWindow* window;
	sf::Event event;
	sf::VideoMode videoMode;

	//Private Functions
	void initVariables();
	void initWindow();

public:
	//Contructor & Destructor
	Game();
	virtual	~Game();
	
	//Accessors
	const bool getWindowIsOpen() const;

	//Functions
	void update();
	void render();
};

