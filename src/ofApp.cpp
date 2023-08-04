#include "ofApp.h"

//--------------------------------------------------------------
// Chapter 2 Code:
/*
// ����������������ʽ�����tri��addVertex()�����ṩ����λ��
// glm��ʾ��ѧ��GLM, ������ɫ��ʹ�õ��ǹ�һ�����豸����
tri.addVertex(glm::vec3(-1.0, 1.0, 0.0));
tri.addVertex(glm::vec3(-1.0, -1.0, 0.0));
tri.addVertex(glm::vec3(1.0, -1.0, 0.0));

// ����Ϊ��һ����������ֱ����ú���������ɫ
tri.addColor(ofFloatColor(1.0, 0.0, 0.0, 1.0));
tri.addColor(ofFloatColor(0.0, 1.0, 0.0, 1.0));
tri.addColor(ofFloatColor(0.0, 0.0, 1.0, 1.0));


*/

void ofApp::setup() {
	// ���������γ���������
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

	// ofDefaultColorType() ֻ�ܷ���default��ɫ�е�һ�֣��������Զ�����ɫ
	quad.addColor(ofDefaultColorType(1, 0, 0, 1)); // red
	quad.addColor(ofDefaultColorType(0, 1, 0, 1)); // green
	quad.addColor(ofDefaultColorType(0, 0, 1, 1)); // blue
	quad.addColor(ofDefaultColorType(1, 1, 1, 1)); // white

	// ��Ϊ�������Ϸ���涼ֻ������������������������Ҫ���������ξ���Ҫ��������������
	// indices�ﶨ�������������εĻ��Ʒ�����{0��1��2}��{1��2��3}
	ofIndexType indices[6] = {0, 1, 2, 1, 2, 3};
	// addIndices()�����ǽ���һ��֤�����飬��������Ϊ���������������ofMesh
	// ��������������һ������ʱ�������ø���������ж������ԡ�
	// ����ζ��������������һ��Ԫ����ָ��һ�������λ�ú���ɫ���ԣ��������������Ҫһ��λ����ͬλ�õ�����ɫ��ͬ�Ķ���
	// ��ô����Ҫ���¶���һ������
	quad.addIndices(indices, 6);

	// ���ض�����ɫ����ƬԪ��ɫ����·����bin/data��
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
	// ��ÿ�ΰ��°������������ε����¶��������ƶ�20����
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
