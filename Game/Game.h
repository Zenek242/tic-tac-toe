#pragma once
#include "Board.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

class Game
{
private:
	sf::RenderWindow m_window;
	Board m_board;

	void processEvents();
	void update();
	void render();
public:
	Game();
	void run();
};
