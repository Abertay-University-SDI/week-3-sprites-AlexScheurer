#include "Player.h"
#include "Framework/Input.h"
#include <iostream>

Player::Player() {

}

Player::~Player() {

}

void Player::handleInput(float dt) {
	if (input->isKeyDown(sf::Keyboard::Left)) {
		//std::cout << velocity.x << " ; " << velocity.y << std::endl;
		setVelocity(sf::Vector2f(-1, 0));
		move(velocity * dt * 500.0f);
	}
	if (input->isKeyDown(sf::Keyboard::Right)) {
		//std::cout << "henlo0" << std::endl;
		setVelocity(sf::Vector2f(1, 0));
		move(velocity * dt * 500.0f);
	}
	if (input->isKeyDown(sf::Keyboard::Up)) {
		//std::cout << velocity.x << " ; " << velocity.y << std::endl;
		setVelocity(sf::Vector2f(0, -1));
		move(velocity * dt * 500.0f);
	}
	if (input->isKeyDown(sf::Keyboard::Down)) {
		//std::cout << "henlo0" << std::endl;
		setVelocity(sf::Vector2f(0, 1));
		move(velocity * dt * 500.0f);
	}
}