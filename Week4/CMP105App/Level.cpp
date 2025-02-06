#include "Level.h"



Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	
	window = hwnd;
	input = in;

	view.setCenter(window->getSize().x/2, window->getSize().y / 2);


	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	enemyTexture.loadFromFile("gfx/Goomba.png");
	duckTexture.loadFromFile("gfx/coolDuck.png");
	explosionTexture.loadFromFile("gfx/explosion.png");


	duck.setTexture(&duckTexture);
	duck.setSize(sf::Vector2f(500, 500));
	duck.setPosition(window->getSize().x / 3.5, window->getSize().y / 4);

	explosion.setTexture(&explosionTexture);
	explosion.setSize(sf::Vector2f(100, 100));
	//explosion.setPosition(window->getSize().x / 3.5, window->getSize().y / 4);

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

	playerObject.setInput(input);
	playerObject.setTexture(&texture);
	playerObject.setSize(sf::Vector2f(100, 100));
	playerObject.setPosition(200, 200);
	playerObject.setFillColor(sf::Color::Cyan);

}

Level::~Level()
{

}



// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
}

// Update game objects
void Level::update(float dt)
{
	static float timer = 0.0f;
	static bool firstReset = false;
	static bool secondReset = false;
	static bool thirdReset = false;

	timer += dt;
	playerObject.handleInput(dt);
	std::cout << timer << std::endl;

	if (timer < 0.6) {
		view.move(2000.0f * dt, 0);
	}
	else if (timer < 1.8) {
		view.move(-2000.0f * dt, 0);
	}
	else if (timer < 2.6) {
		if (firstReset == false) {
			view.setCenter(window->getSize().x / 2, 0);
			firstReset = true;
		}
		view.move(0, 2000.0f * dt);
	}
	else if (timer < 3.4) {
		if (secondReset == false) {
			view.setCenter(window->getSize().x / 2, window->getSize().y);
			secondReset = true;
		}
		view.move(0, -2000.0f * dt);
	}
	else if (timer < 4.2) {
		if (thirdReset == false) {
			view.setCenter(window->getSize().x / 2, window->getSize().y/2);
			thirdReset = true;
		}
		view.rotate(5.0f);
		explosion.setPosition(100, 100);

	}
	//view.zoom(50.0f);
}

// Render level
void Level::render()
{
	beginDraw();
	window->setView(view);

	//window->draw(testSprite);
	//window->draw(playerObject);
	window->draw(duck);
	window->draw(explosion);

	endDraw();
}
