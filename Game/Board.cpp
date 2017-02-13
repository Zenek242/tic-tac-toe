#include "Board.h"

void Board::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			target.draw(m_squares[i][j], states);
}

Board::Board()
{
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			m_squares[i][j].setPosition(j * 100.f, i * 100.f);
}
