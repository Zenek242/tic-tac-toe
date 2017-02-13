#include "Game.h"

void Game::processEvents()
{
	sf::Event e;
	while (m_window.pollEvent(e))
	{
		switch (e.type)
		{
		case sf::Event::Closed:
			m_window.close();
			break;
		}
	}
}

void Game::update()
{

}

void Game::render()
{
	m_window.clear();
	m_window.draw(m_board);
	m_window.display();
}

Game::Game() :
	m_font(),
	m_board(m_font),
	m_window(sf::VideoMode(300, 360), "Tic Tac Toe", sf::Style::Close)
{
	m_font.loadFromFile("Assets/consolab.ttf");
	m_board.setPosition(0.f, 60.f);
}

void Game::run()
{
	while (m_window.isOpen())
	{
		processEvents();
		update();
		render();
	}
}
