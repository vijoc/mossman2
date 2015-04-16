#include <mossman/core/application.h>

#include <iostream>
#include <SFML/Graphics.hpp>

#include <mossman/core/controlinput.h>
#include <mossman/core/scenefactory.h>
#include <mossman/core/scene.h>

namespace mossman {

Application::Application() : isRunning(true) {
}

void Application::initialize() {

}

void Application::run() {
    sf::RenderWindow window(sf::VideoMode(200,200), "mossman");

    auto factory = SceneFactory<sf::RenderWindow>::getInstance();
    // TODO remove this line, discover selected scenes
    auto golScene = std::unique_ptr<Scene<sf::RenderWindow>>(factory->create("Game of Life", &window, nullptr));

    if(golScene == nullptr) {
        std::cerr << "uh oh" << std::endl;

    }

    while(window.isOpen()) {
        // 1. Refresh controls
        // 2. Check selected scene
        //   -> change if necessary
        // 3. Refresh audio buffers
        // 4. Refresh audio analysis
        // 5. Update active scene controller
        // 6. Render scene
        sf::Event event;
        while(window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                isRunning = false;
            }
        }
    
        window.display();
    }
}
}
