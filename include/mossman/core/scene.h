#ifndef MOSSMAN_SCENE_H
#define MOSSMAN_SCENE_H

#include <mossman/core/controlinput.h>
#include <mossman/audio/audiosource.h>

namespace mossman {

template<class TRenderContext>
class Scene {

public:
    virtual ~Scene() {}
    virtual void update(float dt, const ControlInput& controlInput) = 0;
};

}

#endif /* MOSSMAN_SCENE_H */
