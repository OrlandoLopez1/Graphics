#ifndef GRAPHICS_CAMERA_H
#define GRAPHICS_CAMERA_H

#include "SceneObject.h"

class Camera : public SceneObject {
    Camera(glm::vec3 position, glm::vec3 target, glm::vec3 direction);
    virtual ~Camera();
    const glm::mat4 getViewMatrix();

protected:
    glm::vec3 target{};
    glm::vec3 direction{};
//    glm::vec3 camera_x;
//    glm::vec3 camera_y;
//    glm::vec3 camera_z;

};


#endif //GRAPHICS_CAMERA_H