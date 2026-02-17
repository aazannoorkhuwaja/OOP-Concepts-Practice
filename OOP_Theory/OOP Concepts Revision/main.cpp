#include <SFML/Graphics.hpp>
#include <optional>

int main() {
    sf::VideoMode mode({800u, 600u});  // New constructor
    sf::RenderWindow window(mode, "SFML 3 Test", sf::State::Windowed);

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen()) {
        while (auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
