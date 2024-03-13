#ifndef GRAPHICS_SCENEOBJECT_H
#define GRAPHICS_SCENEOBJECT_H

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>


class SceneObject {
public:
    SceneObject();
    virtual ~SceneObject();

protected:
    glm::vec3 position;



};


#endif //GRAPHICS_SCENEOBJECT_H
