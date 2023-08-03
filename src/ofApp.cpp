#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	// 以三分量向量的形式项对象tri的addVertex()函数提供顶点位置
	// glm表示数学库GLM, 顶点着色器使用的是归一化的设备坐标
	tri.addVertex(glm::vec3(-1.0,   1.0,  0.0));
	tri.addVertex(glm::vec3(-1.0,  -1.0,  0.0));
	tri.addVertex(glm::vec3( 1.0,  -1.0,  0.0));

	// 依次为第一二三个顶点分别设置红绿蓝的颜色
	tri.addColor(ofFloatColor(1.0, 0.0, 0.0, 1.0));
	tri.addColor(ofFloatColor(0.0, 1.0, 0.0, 1.0));
	tri.addColor(ofFloatColor(0.0, 0.0, 1.0, 1.0));

	// 加载顶点着色器和片元着色器，路径在bin/data下
	myShader.load("first_vertex.vert", "first_fragment.frag");

}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	myShader.begin();
	tri.draw();
	myShader.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	// 让每次按下按键都让三角形的右下顶点向上移动20像素
	glm::vec3 curPos = tri.getVertex(2);
	tri.setVertex(2, curPos + glm::vec3(0, 0.1, 0));
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
