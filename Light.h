//
// Created by lando on 3/13/24.
//

#ifndef GRAPHICS_LIGHT_H
#define GRAPHICS_LIGHT_H

#include "SceneObject.h"

class Light : public SceneObject {
public:
    Light(glm::vec3 color);
    virtual ~Light();

    glm::vec3 get_color();
protected:
    glm::vec3 color;
};


#endif //GRAPHICS_LIGHT_H
