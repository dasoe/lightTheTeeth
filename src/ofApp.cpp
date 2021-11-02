#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	settings.addColor("beige", ofColor(10, 23, 33, 4));

	for (int i = 0; i < 7; i++) {
		settings.addVec2f("position" + i, ofVec2f(i*100, 100));
	}

	settings.init("settings.xml", true);

	for (int i = 0; i < 7; i++) {
		position.push_back(settings.getVec2fValue("position"+i) );
	}

	indexToSet = 0;
	showHelp = false;
}

//--------------------------------------------------------------
void ofApp::update(){
	settings.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	switch (key) {

	case '1':
		indexToSet = 0;
		break;
	case '2':
		indexToSet = 1;
		break;
	case '3':
		indexToSet = 2;
		break;
	case '4':
		indexToSet = 3;
		break;
	case '5':
		indexToSet = 4;
		break;
	case '6':
		indexToSet = 5;
		break;
	case '7':
		indexToSet = 6;
		break;
	case 'h':
		showHelp = !showHelp;
		break;

	}

}
