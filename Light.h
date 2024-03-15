#ifndef GRAPHICS_LIGHT_H
#define GRAPHICS_LIGHT_H

#include "SceneObject.h"

class Light : public SceneObject {
public:
//    Light(glm::vec3 color_, float constant, float linear, float quadratic);
    Light(glm::vec3 color_ = glm::vec3(1.0f), float constant_ = 1.0f, float linear_ = 0.09f, float quadratic_ = 0.032f)
            : color(color_), constant(constant_), linear(linear_), quadratic(quadratic_) {}

virtual ~Light();


    glm::vec3 get_color();
    glm::vec3 get_direction();
    void set_direction(glm::vec3 direction_);

    float get_constant() const;
    void set_constant(float constant_);
    float get_linear() const;
    void set_linear(float linear_);
    float get_quadratic() const;
    void set_quadratic(float quadratic_);
protected:
    glm::vec3 direction;
    glm::vec3 color;
    glm::vec3 ambient;
    glm::vec3 diffuse;
    glm::vec3 specular;

    float constant;
    float linear;
    float quadratic;

};


#endif //GRAPHICS_LIGHT_H
