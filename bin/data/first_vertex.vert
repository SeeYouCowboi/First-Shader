#version 410

    // 指定顶点存储数据首先具有颜色属性，其次具有位置属性
    layout(location = 0)in vec3 position;
    layout(location = 1)in vec4 color;

    // 输出到片段着色器的颜色，片段着色器中也要有同样的声明但是是in
    out vec4 fragColor;

void main()
{
    // gl_Position是一个内建变量，表示当前顶点的最终位置
    gl_Position = vec4(position, 1.0); // 使用较小的position构造出一个vec4，最后一个分量为1.0
    fragColor = color; // 将颜色输出到片段着色器
    
}