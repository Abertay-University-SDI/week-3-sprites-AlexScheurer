#pragma once
#include "Framework/GameObject.h"

class Cursor : public GameObject
{
private :

public : 
	Cursor();
	~Cursor();
	void handleInput(float dt);

	sf::Texture cursor;
};

