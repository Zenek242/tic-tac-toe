#pragma once
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Transformable.hpp>
#include <SFML/System/NonCopyable.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Text.hpp>

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
	State m_state;
	sf::Text m_symbol;

	void draw(sf::RenderTarget & target, sf::RenderStates states) const;
	void update();
public:
	Square();
	void setFont(sf::Font & font);
	void setState(State state);
	State getState() const { return m_state; }
};
