#ifndef MOSSMAN_SCENEFACTORY_H
#define MOSSMAN_SCENEFACTORY_H

#include <memory>
#include <string>
#include <functional>
#include <map>

namespace mossman {

template<class T>
class Scene;
class AudioSource;

template <class TRenderContext>
class SceneFactory {

typedef std::function<Scene<TRenderContext>* (TRenderContext*, AudioSource*)> SceneFactoryFunction;

public:
    static SceneFactory* getInstance() {
        static SceneFactory<TRenderContext> factory;
        return &factory;
    }

    bool registerScene(std::string name, SceneFactoryFunction fn) {
        mFactoryFunctionRegistry[name] = fn;
    }

    Scene<TRenderContext>* create(std::string name, TRenderContext* rc, AudioSource* as) {
        Scene<TRenderContext>* instance = nullptr;

        auto it = mFactoryFunctionRegistry.find(name);
        if(it != mFactoryFunctionRegistry.end()) {
            instance = it->second(rc, as);
        }

        return instance;
    }

private:
    SceneFactory() {}
    // TODO implement private copy functions etc.

    std::map<std::string, SceneFactoryFunction> mFactoryFunctionRegistry;
};

}

#endif /* MOSSMAN_SCENEFACTORY_H */
