#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	// setup the GL context
	ofGLWindowSettings glSettings;
	glSettings.setSize(1024, 1024);
	glSettings.windowMode = OF_WINDOW;
	glSettings.setGLVersion(4, 1);
	ofCreateWindow(glSettings);

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
