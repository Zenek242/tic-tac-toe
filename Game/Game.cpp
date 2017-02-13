#include "Game.h"
#include <iostream>

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
		case sf::Event::MouseButtonPressed:
			if (e.mouseButton.button == sf::Mouse::Left)
				if (e.mouseButton.x > m_board.getPosition().x && e.mouseButton.x < m_board.getPosition().x + m_board.getSize().x)
					if (e.mouseButton.y > m_board.getPosition().y && e.mouseButton.y < m_board.getPosition().y + m_board.getSize().y)
						m_board.handleClick(e.mouseButton.x, e.mouseButton.y);
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
	m_window.draw(m_text);
	m_window.draw(m_board);
	m_window.display();
}

Game::Game() :
	m_font(),
	m_board(m_font),
	m_turn(Turn::O),
	m_text("Next turn: X", m_font, 30),
	m_window(sf::VideoMode(320, 360), "Tic Tac Toe", sf::Style::Close)
{
	m_font.loadFromFile("Assets/consolab.ttf");
	m_board.setPosition(10.f, 50.f);
	m_text.setPosition(10.f, 5.f);
	m_window.setFramerateLimit(60);
	m_window.setKeyRepeatEnabled(false);
	m_window.setVerticalSyncEnabled(true);
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
