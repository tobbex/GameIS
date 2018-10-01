#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>

int main()
{
	// Create the main window
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;
	sf::RenderWindow window(sf::VideoMode(800, 600), "GameIS", sf::Style::Default, settings);
	window.setVerticalSyncEnabled(true);

	//Get size of window
	/*sf::Vector2u size = window.getSize();
	unsigned int width = size.x;
	unsigned int height = size.y;*/
	
	// load a 32x32 rectangle that starts at (10, 10)
	/*
	if (!texture.loadFromFile("image.png", sf::IntRect(10, 10, 32, 32)))
	{
		// error...
	}	 */

	   /*
	// get the bounding box of the entity
	sf::FloatRect boundingBox = entity.getGlobalBounds();

	// check collision with a point
	sf::Vector2f point = ...;
	if (boundingBox.contains(point))
	{
		// collision!
	}

	// check collision with another box (like the bounding box of another entity)
	sf::FloatRect otherBox = ...;
	if (boundingBox.intersects(otherBox))
	{
		// collision!
	}
	  */



	// set the absolute scale of the entity
	//entity.setScale(4.0f, 1.6f);

	// scale the entity relatively to its current scale
	//entity.scale(0.5f, 0.5f);

	// retrieve the absolute scale of the entity
	//sf::Vector2f scale = entity.getScale(); // = (2, 0.8)

	//texture.setSmooth(true);

	// Load background to display
	sf::Texture texBg;
	if (!texBg.loadFromFile("Background.jpg"))
	{
		// error...
	}
	sf::Sprite spriBg;
	spriBg.setTexture(texBg);		  

	// Load player
	

	//Load fire
	sf::CircleShape square(10, 6);
	square.setFillColor(sf::Color(150, 50, 250));
	// set a 10-pixel wide orange outline
	square.setOutlineThickness(-2);
	square.setOutlineColor(sf::Color(250, 150, 100));



	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			// check the type of the event...
			switch (event.type)
			{
				// window closed
			case sf::Event::Closed:
				window.close();
				break;

				// key pressed
			case sf::Event::KeyPressed:
					break;

				// we don't process other types of events
			default:
				break;
			}
		}
		// Clear screen
		window.clear();
		window.draw(spriBg);
		//window.draw(square);
		window.display();
	}
	return EXIT_SUCCESS;
}