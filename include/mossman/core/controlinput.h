#ifndef MOSSMAN_CONTROLINPUT_H
#define MOSSMAN_CONTROLINPUT_H

namespace mossman {

/**
 * ControlInput is the abstract base class for all control input provider
 * implementations. There are two types of inputs: analog and digital, i.e.
 * floats and booleans.
 */
class ControlInput {

public:
    virtual bool readDigital(int channel) = 0;
    virtual float readAnalog(int channel) = 0;

    virtual void refresh() = 0;
};

}
#endif /* MOSSMAN_CONTROLINPUT_H */
