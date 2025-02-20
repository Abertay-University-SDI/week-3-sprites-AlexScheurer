#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include "Player.h"
#include "Enemy.h"


class Level : BaseLevel {
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render() override;

private:
	// Level objects
	GameObject testSprite;
	//GameObject duck;
	//GameObject explosion;
	sf::Texture texture;
	sf::Texture enemyTexture;
	//sf::Texture duckTexture;
	//sf::Texture explosionTexture;
	Player playerObject;
	Enemy enemy;

	sf::View view;
};