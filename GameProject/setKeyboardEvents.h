#include <SDL2\SDL_events.h>
#include <SFML/Window/Event.hpp>



int setKeyboardControls() {

	sf::Event input;
	if (input.type == sf::Event::KeyPressed) {
		switch (input.key.code) {
		case sf::Keyboard::A:
			printf("The 'A key' was pressed..."); return;
		case sf::Keyboard::W:
			printf("The 'W key' was pressed..."); return;
		case sf::Keyboard::S:
			printf("The 'S key' was pressed..."); return;
		}
	}
	if (input.type == sf::Event::Closed)
		GameWindow.close();

	return 1;
}
