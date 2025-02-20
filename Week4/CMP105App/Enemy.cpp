#include "Enemy.h"
#include <iostream>

Enemy::Enemy() {
	

	goomba.loadFromFile("gfx/Goomba.png");
	setTexture(&goomba);

	setVelocity(0.0f, 2.0f);
}

Enemy::~Enemy() {

}

//void Enemy::setWindow(sf::RenderWindow* wnd) {
//	window = wnd;
//}

void Enemy::update(float dt) {
	if (getVelocity().y > 0 && getPosition().y + getSize().y > window->getSize().y)
	{
		//std::cout << getPosition().y << " ; " << getSize().y << " ; " << window->getSize().y << std::endl;
		setVelocity(0.0f, -2.0f);
	}
	if (getVelocity().y < 0 && getPosition().y < 0)
	{
		//std::cout << getPosition().y << " ; " << getSize().y << " ; " << window->getSize().y << std::endl;
		setVelocity(0.0f, 2.0f);
	}
	move(velocity * dt * 100.0f);
}