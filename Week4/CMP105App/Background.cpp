#include "Background.h"

Background::Background() {
	bg.loadFromFile("gfx/Level1_1.png");
	setTexture(&bg);
	setSize(sf::Vector2f(11038, 675));
}

Background::~Background() {

}

void Background::setWindow(sf::RenderWindow* wnd) {
	window = wnd;
}

void Background::handleInput(float dt) {
	sf::View v = window->getView();
	if (input->isKeyDown(sf::Keyboard::A) && v.getCenter().x - window->getSize().x / 2 > 0) {
		v.setCenter(v.getCenter().x - 5, v.getCenter().y);
	}
	if (input->isKeyDown(sf::Keyboard::D) && v.getCenter().x + window->getSize().x/2 < 11038) {
		v.setCenter(v.getCenter().x + 5, v.getCenter().y);
	}
	window->setView(v);
}