#ifndef GRAPHICS_SPOTLIGHT_H
#define GRAPHICS_SPOTLIGHT_H

#include "Light.h"
class Spotlight : public Light  {
public:
    Spotlight(glm::vec3 color, glm::vec3 position_, glm::vec3 direction_, float inner_cut_off, float outer_cut_off);
    virtual ~Spotlight();

    float get_inner_cut_off();
    float get_outer_cut_off();
protected:
    float inner_cutoff;
    float outer_cutoff;
};


#endif //GRAPHICS_SPOTLIGHT_H
