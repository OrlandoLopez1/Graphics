#include "Camera.h"

const glm::mat4 Camera::get_view_matrix() {
    glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f);
    return glm::lookAt(this->position, this->target, up);
}

Camera::Camera(glm::vec3 position, glm::vec3 target) {
    this->position = position;
    this->target = target;
    this->direction = glm::normalize(position - target) ;

}

Camera::~Camera() {

}

const glm::vec3 Camera::get_position() {
    return position;
}

const glm::vec3 Camera::get_direction() {
    return direction;
}

