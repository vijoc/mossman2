#ifndef MOSSMAN_GAMEOFLIFE_H
#define MOSSMAN_GAMEOFLIFE_H

#include <mossman/core/scene.h>
#include <SFML/Graphics.hpp>

namespace mossman {

class GameOfLifeSfmlScene : public Scene<sf::RenderWindow> {

public:
    GameOfLifeSfmlScene(sf::RenderWindow* renderContext, AudioSource* as);
    void update(float dt, const ControlInput& input) override;
};

}

#endif
