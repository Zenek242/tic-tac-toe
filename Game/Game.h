#pragma once
#include "Board.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/Font.hpp>

class Game
{
private:
	sf::Font m_font;
	Board m_board;
	sf::RenderWindow m_window;

	void processEvents();
	void update();
	void render();
public:
	Game();
	void run();
};
