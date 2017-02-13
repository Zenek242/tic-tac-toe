#pragma once
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Transformable.hpp>
#include <SFML/System/NonCopyable.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

class Square :
	public sf::Drawable,
	public sf::Transformable,
	private sf::NonCopyable
{
public:
	enum State
	{
		None,
		O,
		X
	};
private:
	sf::RectangleShape m_box;

	void draw(sf::RenderTarget & target, sf::RenderStates states) const;
public:
	Square();
};
