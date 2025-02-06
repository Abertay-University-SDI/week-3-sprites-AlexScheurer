#pragma once
#include "Framework/GameObject.h"
#include "Framework/Input.h"

class Player : public GameObject
{
private :

public :
	Player();
	~Player();
	void handleInput(float dt);
};

