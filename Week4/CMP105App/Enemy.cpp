#include "Enemy.h"

Enemy::Enemy() {
	setPosition(200, 200);
	setSize(sf::Vector2f(100, 100));

	goomba.loadFromFile("gfx / Goomba.png");
	setTexture(&goomba);

	setVelocity(0.0f, 2.0f);
}

Enemy::~Enemy() {

}

void Enemy::setWindow(sf::RenderWindow* wnd) {
	window = wnd;
}

void Enemy::update(float dt) {
	if (getVelocity().y > 0 && getPosition().y + getSize().y > window->getSize().y)
	{
		setVelocity(0.0f, -2.0f);
	}
}