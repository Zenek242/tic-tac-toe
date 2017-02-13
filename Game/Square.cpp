#include "Square.h"

void Square::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	states.transform *=  getTransform();
	target.draw(m_box, states);
}

Square::Square()
{
	m_box.setSize(sf::Vector2f(98.f, 98.f));
	m_box.setPosition(1.f, 1.f);
	m_box.setFillColor(sf::Color::Black);
	m_box.setOutlineColor(sf::Color::White);
	m_box.setOutlineThickness(1.f);

	m_state = State::None;
}
