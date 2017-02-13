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

void Board::handleClick(int x, int y)
{
	x -= (int)getPosition().x;
	y -= (int)getPosition().y;

	int i = x / 100;
	int j = y / 100;

	if (!m_squares[j][i].getState())
		m_squares[j][i].setState(Square::State::X);
}
