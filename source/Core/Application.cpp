#include <iostream>
#include <stdexcept>

extern "C" {
    #include "glad/glad.h"
    #include "glfw3.h"
}

#include "Core/Application.hpp"

namespace Core {
    Application::Application() : 
        m_state(State::UNINITIALIZED), 
        m_window("Physarithm"),
        m_physarum()
    {

    }

    void Application::run() {
        while(!glfwWindowShouldClose(m_window.handle())) {
            glClear(GL_COLOR_BUFFER_BIT);
            
            glDrawArrays(GL_TRIANGLES, 0, 3);

            glfwSwapBuffers(m_window.handle());
            glfwPollEvents();
        }
    }
}