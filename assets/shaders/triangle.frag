#version 430 core

in vec3 vertexColor;
out vec4 fragColor;

void main(void) {
    fragColor = vec4(vertexColor.xyz, 1.0);
}