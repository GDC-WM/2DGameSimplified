#include "createWindow.h"
//#include "Music.h"

void startGameAndSetControls() 
{
	
	while (GameWindow.isOpen()) {
		
		sf::Event input;

		while (GameWindow.waitEvent(input)) {
			if (input.type == sf::Event::KeyPressed) {
				switch (input.key.code) {
				case sf::Keyboard::A:
					printf("The 'A key' was pressed...\n"); break;
				case sf::Keyboard::W:
					printf("The 'W key' was pressed...\n"); break;
				case sf::Keyboard::S:
					printf("The 'S key' was pressed...\n"); break;
				case sf::Keyboard::D:
					printf("The 'D key' was pressed...\n"); break;
				case sf::Keyboard::P:
					//music.pause();
				case sf::Keyboard::Escape:
					GameWindow.close();
				}
			}
			if (input.type == sf::Event::Closed)
				GameWindow.close();
		}
		GameWindow.clear(sf::Color::Black);
		GameWindow.display();
	}
}

