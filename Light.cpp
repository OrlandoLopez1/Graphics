//
// Created by lando on 3/13/24.
//

#include "Light.h"


Light::~Light() {

}

glm::vec3 Light::get_color() {
    return color;
}

glm::vec3 Light::get_direction() {
    return direction;
}

void Light::set_direction(glm::vec3 direction_) {
    this->direction = direction_;
}

float Light::get_constant() const {
    return constant;
}

void Light::set_constant(float constant_) {
    this->constant = constant_;
}

float Light::get_linear() const {
    return linear;
}

void Light::set_linear(float linear_) {
    this->linear = linear_;
}

float Light::get_quadratic() const {
    return quadratic;
}

void Light::set_quadratic(float quadratic_) {
    this->quadratic = quadratic_;
}

