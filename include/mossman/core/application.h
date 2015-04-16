#ifndef MOSSMAN_APPLICATION_H
#define MOSSMAN_APPLICATION_H

#include <memory>

#include <mossman/core/controlinput.h>

namespace mossman {

class Application {

public:

    Application();

    void initialize();
    void run();

private:

    bool isRunning;
    std::unique_ptr<ControlInput> controlInput;

};

} // namespace
#endif /* MOSSMAN_APPLICATION_H */
