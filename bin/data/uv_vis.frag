#version 410

// Œ∆¿Ì
uniform sampler2D LennaTex;

in vec2 fragUV;
out vec4 outColor;

void main()
{
    vec4 tex = texture(LennaTex, fragUV) * 1.5;
    outColor = tex;
}
