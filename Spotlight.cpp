#include "Spotlight.h"


Spotlight::Spotlight(glm::vec3 color, glm::vec3 position_, glm::vec3 direction_, float cut_off_) : Light(color) {
    this->position = position_;
    this->direction = direction_;
    this->cut_off = cut_off_;
}

Spotlight::~Spotlight() {

}

float Spotlight::get_cut_off() {
    return cut_off;
}
