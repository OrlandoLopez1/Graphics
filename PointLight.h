#ifndef GRAPHICS_POINTLIGHT_H
#define GRAPHICS_POINTLIGHT_H

#include "Light.h"

class PointLight : public Light {
public:
    PointLight(glm::vec3 color_, float constant_, float linear_, float quadratic_)
            : Light(color_), constant(constant_), linear(linear_), quadratic(quadratic_) {}

    virtual ~PointLight() {}

    float get_constant() const { return constant; }
    void set_constant(float constant_) { constant = constant_; }
    float get_linear() const { return linear; }
    void set_linear(float linear_) { linear = linear_; }
    float get_quadratic() const { return quadratic; }
    void set_quadratic(float quadratic_) { quadratic = quadratic_; }

protected:
    float constant;
    float linear;
    float quadratic;
};

#endif //GRAPHICS_POINTLIGHT_H

