//
// Created by lando on 3/13/24.
//

#include "Light.h"

Light::Light(glm::vec3 color) {
    this->color = color;
}

Light::~Light() {

}

glm::vec3 Light::get_color() {
    return color;
}

