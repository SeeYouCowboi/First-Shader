#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	// ����������������ʽ�����tri��addVertex()�����ṩ����λ��
	// glm��ʾ��ѧ��GLM, ������ɫ��ʹ�õ��ǹ�һ�����豸����
	tri.addVertex(glm::vec3(-1.0,   1.0,  0.0));
	tri.addVertex(glm::vec3(-1.0,  -1.0,  0.0));
	tri.addVertex(glm::vec3( 1.0,  -1.0,  0.0));

	// ����Ϊ��һ����������ֱ����ú���������ɫ
	tri.addColor(ofFloatColor(1.0, 0.0, 0.0, 1.0));
	tri.addColor(ofFloatColor(0.0, 1.0, 0.0, 1.0));
	tri.addColor(ofFloatColor(0.0, 0.0, 1.0, 1.0));

	// ���ض�����ɫ����ƬԪ��ɫ����·����bin/data��
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
	// ��ÿ�ΰ��°������������ε����¶��������ƶ�20����
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
