#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(1280, 720), "SFML works!");
    CircleShape circle(50.f);
    circle.setFillColor(Color::Green);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        circle.move(0.2f,0.f);
        window.clear();
        window.draw(circle);
        window.display();
    }

    return 0;
}
