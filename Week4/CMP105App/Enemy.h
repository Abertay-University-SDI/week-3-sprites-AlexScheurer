#pragma once
#include "Framework/GameObject.h"

class Enemy : public GameObject
{
private :

public :
	Enemy();
	~Enemy();
	void bouncyBounce(float dt);
};

