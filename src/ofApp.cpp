#include "ofApp.h"
#include "ofAppRunner.h"
#include "ofMath.h"

//--------------------------------------------------------------
void ofApp::setup() {

	pos.x = ofRandom(0, ofGetWidth());
	pos.y = ofRandom(0, ofGetHeight());

	// decrease the ranges to make it go slower
	vel.x = ofRandom(-50, 50);
	vel.y = ofRandom(-50, 50);
}

//--------------------------------------------------------------
void ofApp::update() {
	// can also increase frame rate to make it go faster
	ofSetFrameRate(30);

	int width = ofGetWidth();
	int height = ofGetHeight();

	// adding two vectors?????
	pos += vel;

	if ((pos.x > width) || (pos.x <= 0)) {
		vel.x *= -1;
	}

	if ((pos.y > height) || (pos.y <= 0)) {
		vel.y *= -1;
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofDrawCircle(pos.x, pos.y, 40);
}

//--------------------------------------------------------------
void ofApp::exit() {
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY) {
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {
}
