#include <iostream>
#include "glad/gl.h" 
#include "GLFW/glfw3.h"
#include "glm/vec3.hpp"


int main(void)
{
    if(!glfwInit()){
        return -1;
    }

    GLFWwindow* win = glfwCreateWindow(256, 256, "asd", NULL, NULL);
    if (win == NULL) {
        std::cout << "error" << std::endl;
        glfwTerminate();
        return -1;
    }

    glm::vec3 v = glm::vec3(1.488f, 0.0f, 0.f);
    float x = v.x;

    glfwTerminate();
    std::cout << x << std::endl;
    return 0;
}