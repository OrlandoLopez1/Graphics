#include "Camera.h"

const glm::mat4 Camera::getViewMatrix() {
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

