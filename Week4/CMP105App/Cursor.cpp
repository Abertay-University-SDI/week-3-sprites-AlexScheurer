#include "Cursor.h"

Cursor::Cursor() {
	cursor.loadFromFile("gfx/icon.png");
	setTexture(&cursor);
	setSize(sf::Vector2f(48, 48));
}

Cursor::~Cursor() {

}

void Cursor::handleInput(float dt) {
	float mouseX = input->getMouseX();
	float mouseY = input->getMouseY();

	setPosition(mouseX, mouseY);
}