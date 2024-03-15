//
// Created by lando on 3/13/24.
//

#include "Light.h"

Light::Light(glm::vec3 color_) {
    this->color = color_;

}

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

