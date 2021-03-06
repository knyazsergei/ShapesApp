#pragma once
#include "BaseControl.h"

namespace ui
{

class CButton : public CBaseControl
{
public:
	CButton();

	void setIcon(sf::Texture *);
protected:
	void OnDraw(sf::RenderTarget& target, sf::RenderStates states) const override;
	bool OnMousePressed(sf::Event::MouseButtonEvent const& event) override;

private:
	sf::RectangleShape m_background;
	sf::Sprite m_image;
};

}