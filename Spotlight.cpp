#include "Spotlight.h"


Spotlight::Spotlight(glm::vec3 color, glm::vec3 position_, glm::vec3 direction_, float inner_cut_off,
                     float outer_cut_off) : Light(color) {
    this->position = position_;
    this->direction = direction_;
    this->inner_cutoff = inner_cut_off;
    this->outer_cutoff = outer_cut_off;
}

Spotlight::~Spotlight() {

}

float Spotlight::get_inner_cut_off() {
    return inner_cutoff;
}

float Spotlight::get_outer_cut_off() {
    return outer_cutoff;
}
