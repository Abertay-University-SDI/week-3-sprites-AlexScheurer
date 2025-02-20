#pragma once
#include "Framework/GameObject.h"

class Enemy : public GameObject
{
private :

public :
	Enemy();
	~Enemy();
	void setWindow(sf::RenderWindow* wnd);
	void update(float dt);

	sf::Texture goomba;
	sf::RenderWindow* window;
};

