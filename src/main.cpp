#include </workspace/game-engine/include/GLFW/glfw3.h>
#include <iostream>

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit()) {
        return -1;
    }
    std::cout << "Hello World\n";
    return 0;
}