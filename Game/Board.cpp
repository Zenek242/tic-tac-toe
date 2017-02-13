#include "Board.h"

void Board::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			target.draw(m_squares[i][j], states);
}

Board::Board(sf::Font & font)
{
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
		{
			m_squares[i][j].setPosition(j * 100.f, i * 100.f);
			m_squares[i][j].setFont(font);
		}
}

void Board::handleClick(float x, float y)
{
	x -= getPosition().x;
	y -= getPosition().y;
}

sf::Vector2f Board::getSize() const
{
	return sf::Vector2f(3 * 100, 3 * 100);
}
