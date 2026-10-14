#include <iostream>

extern "C" {
    #include "glad/glad.h"
}

#include "Simulation/Physarum.hpp"
#include "GL/Program.hpp"
#include "GL/Shader.hpp"
#include "GL/Vertex.hpp"


namespace Simulation {
    Physarum::Physarum() : 
        m_program(GL::Shader("assets/shaders/triangle.vert"), 
                  GL::Shader("assets/shaders/triangle.frag")),
        m_vao(),
        m_vbo()
    {

        m_vao.bind();
        m_vbo.bind();
        m_vbo.upload(m_vertices.data(), m_vertices.size() * sizeof(float), GL_STATIC_DRAW);

        GLsizei stride = 6 * sizeof(float); // 3 elements for position, 3 elements for color
        m_vao.setAttribute(m_vbo, 0, 3, stride, 0);                 // position attribute
        m_vao.setAttribute(m_vbo, 1, 3, stride, 3 * sizeof(float)); // color attribute
    
        m_program.use();
    }   

    Physarum::~Physarum() {

    }
}