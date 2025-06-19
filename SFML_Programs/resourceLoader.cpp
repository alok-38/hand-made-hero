// resourceLoader.cpp
#include <SFML/Graphics.hpp>

int main()
{
    // SFML 3 requires Vector2u for window size
    sf::Vector2u windowSize{800, 600};
    sf::VideoMode mode{windowSize, 32};
    sf::RenderWindow window{mode, "SFML 3.0 Window"};

    // Draw a green circle
    sf::CircleShape circle{100.0f}; // radius
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(sf::Vector2f{350.f, 250.f}); // use Vector2f

    // Main loop
    while (window.isOpen())
    {
        // Poll events into auto variable
        sf::Event event;
        while (window.pollEvent(event))
        {
            // SFML 3 uses event.isClosed() to check close request
            if (event.isClosed())
                window.close();
        }

        window.clear(sf::Color::Black);
        window.draw(circle);
        window.display();
    }
}
