#include <mossman/core/application.h>
#include <iostream>

#include <SFML/Graphics.hpp>

namespace mossman {

    Application::Application() : isRunning(true) {}

    void Application::run() {
        while(isRunning) {
            std::cout << "mossman running!" << std::endl;
            isRunning = false;
            // 1. Refresh controls
            // 2. Check selected scene
            //   -> change if necessary
            // 3. Refresh audio buffers
            // 4. Refresh audio analysis
            // 5. Update active scene controller
            // 6. Render scene
        }
    }
}
