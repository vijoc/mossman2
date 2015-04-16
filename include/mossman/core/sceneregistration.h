#ifndef MOSSMAN_SCENEREGISTRATION_H
#define MOSSMAN_SCENEREGISTRATION_H

#include <string>
#include <mossman/core/scenefactory.h>

namespace mossman {

template<class TScene, class TRenderContext>
class SceneRegistration {

public:
    SceneRegistration(std::string sceneName) {
        auto factory = SceneFactory<TRenderContext>::getInstance();

        auto factoryFn = [](TRenderContext* rc, AudioSource* as) -> TScene* { return new TScene(rc, as); };

        factory->registerScene(sceneName, factoryFn);

    }
};

}

#endif
