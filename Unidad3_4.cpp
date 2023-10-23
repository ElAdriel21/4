#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "4");

    sf::Texture texture;
    texture.loadFromFile("chessw.png");
    sf::Sprite sprite(texture);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();

        sprite.setPosition(30, 600);
        sprite.setScale(0.2, -0.2);
        window.draw(sprite);

        sprite.setPosition(90, 600);
        sprite.setScale(0.2, -0.5);
        window.draw(sprite);

        sprite.setPosition(150, 600);
        sprite.setScale(0.2, -0.8);
        window.draw(sprite);

        sprite.setPosition(210, 600);
        sprite.setScale(0.2, -1.1);
        window.draw(sprite);

        sprite.setPosition(270, 600);
        sprite.setScale(0.2, -1.4);
        window.draw(sprite);

        sprite.setPosition(330, 600);
        sprite.setScale(0.2, -1.7);
        window.draw(sprite);

        sprite.setPosition(390, 600);
        sprite.setScale(0.2, -2);
        window.draw(sprite);

        sprite.setPosition(700, 350);
        sprite.setScale(-2, 0.2);
        window.draw(sprite);

        window.display();
    }
}
