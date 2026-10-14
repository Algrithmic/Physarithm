#version 430 core
layout (location = 0) in vec2 vPos;
layout (location = 1) in vec3 vColor;

out vec3 vertexColor;

void main(void) {
    gl_Position = vec4(vPos.xy, 0.0, 1.0);
    vertexColor = vColor;
}