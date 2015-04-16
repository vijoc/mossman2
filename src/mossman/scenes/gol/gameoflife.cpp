#include <mossman/scenes/gol/gameoflife.h>
#include <mossman/core/sceneregistration.h>

namespace mossman {

static SceneRegistration<GameOfLifeSfmlScene, sf::RenderWindow> registration("Game of Life");

GameOfLifeSfmlScene::GameOfLifeSfmlScene(sf::RenderWindow* renderContext, AudioSource* as) { }

void GameOfLifeSfmlScene::update(float dt, const ControlInput& input) {}

}
