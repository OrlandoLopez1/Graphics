#ifndef GRAPHICS_SPOTLIGHT_H
#define GRAPHICS_SPOTLIGHT_H

#include "Light.h"
class Spotlight : public Light  {
public:
    Spotlight(glm::vec3 color, glm::vec3 position_, glm::vec3 direction_, float cut_off_);
    virtual ~Spotlight();

    float get_cut_off();
protected:
    float cut_off;
};


#endif //GRAPHICS_SPOTLIGHT_H
