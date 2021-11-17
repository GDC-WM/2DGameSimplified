#include <SFML/Audio.hpp>
#include <iostream>

sf::Music music;

void setMusic(std::string FilePath, float volume)
{
	music.openFromFile(FilePath);
	music.setVolume(volume);
	music.play();
	music.setLoop(true);
}
