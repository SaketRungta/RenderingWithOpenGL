#include "lib.h"

int main()
{
    glfwInit();

    glewExperimental = GL_TRUE;

    if (glewInit() != GLEW_OK) {
        glfwTerminate();
        throw "Error in GLEW INIT!";
    }

    system("PAUSE");

    return 0;
}