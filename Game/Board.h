#pragma once
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Transformable.hpp>
#include <SFML/System/NonCopyable.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/Font.hpp>
#include "Square.h"
#include <array>

class Board :
	public sf::Drawable,
	public sf::Transformable,
	private sf::NonCopyable
{
private:
	std::array<std::array<Square, 3>, 3> m_squares;

	void draw(sf::RenderTarget & target, sf::RenderStates states) const;
public:
	explicit Board(sf::Font & font);
	void handleClick(int x, int y);
	sf::Vector2f getSize() const { return sf::Vector2f(3 * 100, 3 * 100); }
};
