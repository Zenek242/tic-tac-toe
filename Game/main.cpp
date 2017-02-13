#include <SFML/Graphics.hpp>
#include "Board.h"

int main()
{
	Board board;
	board.setPosition(0.f, 60.f);
	sf::RenderWindow window(sf::VideoMode(300, 360), "Tic Tac Toe", sf::Style::Close);

	while (window.isOpen())
	{
		sf::Event e;
		while (window.pollEvent(e))
		{
			switch (e.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
		}
		window.clear();
		window.draw(board);
		window.display();
	}

	return EXIT_SUCCESS;
}
