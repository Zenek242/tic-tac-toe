#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(300, 350), "Tic Tac Toe", sf::Style::Close);

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

		window.display();
	}

	return EXIT_SUCCESS;
}
