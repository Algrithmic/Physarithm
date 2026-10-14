#ifndef PHYSARUM_HPP
#define PHYSARUM_HPP

#include <array>

#include "GL/Program.hpp"
#include "GL/Vertex.hpp"


namespace Simulation {
    class Physarum {
    private:
        GL::Program m_program;
        GL::VertexArray m_vao;
        GL::VertexBuffer m_vbo;
        static constexpr std::array m_vertices = { 
            // positions        // colors
            0.5f, -0.5f, 0.0f,  1.0f, 0.0f, 0.0f,   // bottom right
           -0.5f, -0.5f, 0.0f,  0.0f, 1.0f, 0.0f,   // bottom left
            0.0f,  0.5f, 0.0f,  0.0f, 0.0f, 1.0f    // top 
        };
    public:
        Physarum();
        ~Physarum();

        Physarum(Physarum const &) = delete;
    };
}

#endif