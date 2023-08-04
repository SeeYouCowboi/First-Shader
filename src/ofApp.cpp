#include "ofApp.h"

//--------------------------------------------------------------
// Chapter 2 Code:
/*
// 以三分量向量的形式项对象tri的addVertex()函数提供顶点位置
// glm表示数学库GLM, 顶点着色器使用的是归一化的设备坐标
tri.addVertex(glm::vec3(-1.0, 1.0, 0.0));
tri.addVertex(glm::vec3(-1.0, -1.0, 0.0));
tri.addVertex(glm::vec3(1.0, -1.0, 0.0));

// 依次为第一二三个顶点分别设置红绿蓝的颜色
tri.addColor(ofFloatColor(1.0, 0.0, 0.0, 1.0));
tri.addColor(ofFloatColor(0.0, 1.0, 0.0, 1.0));
tri.addColor(ofFloatColor(0.0, 0.0, 1.0, 1.0));


*/

void ofApp::setup() {
	// 定义正方形长成这样：
	//	0 --------- 1
	//  |         / |
	//	|      /    |
	//	|    /      |
	//	| /         |
	//	2 --------- 3
	quad.addVertex(glm::vec3(-0.5, 0.5, 0));
	quad.addVertex(glm::vec3(0.5, 0.5, 0));
	quad.addVertex(glm::vec3(-0.5, -0.5, 0));
	quad.addVertex(glm::vec3(0.5, -0.5, 0));

	// ofDefaultColorType() 只能返回default颜色中的一种，并不是自定义颜色
	quad.addColor(ofDefaultColorType(1, 0, 0, 1)); // red
	quad.addColor(ofDefaultColorType(0, 1, 0, 1)); // green
	quad.addColor(ofDefaultColorType(0, 0, 1, 1)); // blue
	quad.addColor(ofDefaultColorType(1, 1, 1, 1)); // white

	// 因为大多数游戏引擎都只有三角形面的网格所以如果需要绘制正方形就需要绘制两次三角形
	// indices里定义了两个三角形的绘制方法：{0，1，2}和{1，2，3}
	ofIndexType indices[6] = {0, 1, 2, 1, 2, 3};
	// addIndices()作用是接受一个证书数组，并将其作为索引缓冲区分配给ofMesh
	// 索引缓冲区引用一个顶点时它将引用该网络的所有顶点属性。
	// 这意味着索引缓冲区第一个元素是指第一个顶点的位置和颜色属性，所以如果我们需要一个位于相同位置但是颜色不同的顶点
	// 那么就需要重新定义一个顶点
	quad.addIndices(indices, 6);

	// 加载顶点着色器和片元着色器，路径在bin/data下
	myShader.load("first_vertex.vert", "first_fragment.frag");
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	myShader.begin();
	quad.draw();
	myShader.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	// 让每次按下按键都让三角形的右下顶点向上移动20像素
	//glm::vec3 curPos = tri.getVertex(2);
	//tri.setVertex(2, curPos + glm::vec3(0, 0.1, 0));
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
