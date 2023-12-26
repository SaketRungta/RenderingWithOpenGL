#include "lib.h"

int main()
{
    glfwInit();

    glewExperimental = GL_TRUE;

    if (glewInit() != GLEW_OK) {
        std::cout << "yupppppppp\n";
    }

    system("PAUSE");

    return 0;
}