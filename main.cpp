#include <iostream>
#include "SFML/Graphics.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Triangle");
    sf::CircleShape triangle(120.f, 3);
    triangle.setFillColor(sf::Color(70, 50, 40));
    triangle.setPosition(1920 / 3 - 120.f,1080 / 3- 120.f);
    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::MouseButtonPressed) {
                triangle.move(768, 500);
            }
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Green);

        // draw everything here...
        window.draw(triangle);

        // end the current frame
        window.display();
    }
    return 0;
}
