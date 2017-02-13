#pragma once
#include "Board.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/Font.hpp>

class Game
{
private:
	enum Turn {
		O,
		X,
	};

	sf::Font m_font;
	Board m_board;
	Turn m_turn;
	sf::Text m_text;

	sf::RenderWindow m_window;

	void processEvents();
	void update();
	void render();
public:
	Game();
	void run();
};
