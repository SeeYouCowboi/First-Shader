#version 410

// 默认情况下，openFramworks将顶点属性分配到以下位置：
// (0)位置, (1)颜色, (2)法线, (3)纹理坐标
layout (location = 0) in vec3 pos;
layout (location = 3) in vec2 uv;

out vec2 fragUV;

void main()
{
    gl_Position = vec4(pos, 1.0);
    // 因为OpenGL很傻逼，它希望图像数据从像素的最下面一行开始存储，但是几乎所有2D图像格式都将最上面一行存储为第一行
    // 所以我们要把纹理坐标倒转过来，因为UV坐标从0到1，所以只需要1-y就可以把y方向倒转过来
    fragUV = vec2(uv.x, 1.0 - uv.y);
}