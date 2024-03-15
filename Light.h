#ifndef GRAPHICS_LIGHT_H
#define GRAPHICS_LIGHT_H

#include "SceneObject.h"
#include <glm/glm.hpp>

class Light : public SceneObject {
public:
    Light(glm::vec3 color_);
    virtual ~Light();

    glm::vec3 get_color();
    glm::vec3 get_direction();
    void set_direction(glm::vec3 direction_);

protected:
    glm::vec3 direction;
    glm::vec3 color;
    glm::vec3 ambient;
    glm::vec3 diffuse;
    glm::vec3 specular;
};

#endif //GRAPHICS_LIGHT_H
