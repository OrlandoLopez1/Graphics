cmake_minimum_required(VERSION 3.27)
project(Graphics)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)

add_executable(Graphics
        main.cpp
        SceneObject.cpp
        SceneObject.h
        Camera.cpp
        Camera.h
        Shader.h
        Light.cpp
        Light.h
        PointLight.h
        Spotlight.cpp
        Spotlight.h
)


target_include_directories(Graphics PRIVATE
#        ${PROJECT_SOURCE_DIR}/external
        ${OPENGL_INCLUDE_DIR}
        ${GLEW_INCLUDE_DIRS})

target_link_libraries(Graphics
        ${OPENGL_LIBRARIES}
        ${GLEW_LIBRARIES}
        glfw)
