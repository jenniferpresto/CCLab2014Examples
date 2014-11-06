#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(50);
    
    ofSetRectMode(OF_RECTMODE_CENTER);

    sqPosX = ofGetWindowWidth() / 2;
    sqPosY = (ofGetWindowHeight() / 2) - 100;
    
    sqVelX = 5.0;
    
    cirPosX = ofGetWindowWidth() / 2;
    cirPosY = (ofGetWindowHeight() / 2) + 100;
    
    cirMag = 200.0;

}

//--------------------------------------------------------------
void ofApp::update(){
    sqPosX += sqVelX;

    //  bounce we're all used to
    //  here, not using full window
    //  instead, using an area 400 pixels wide in the middle of the screen
    if (sqPosX > (ofGetWindowWidth() / 2) + 200) {
        sqPosX = (ofGetWindowWidth() / 2) + 200;
        sqVelX *= -1;
    } else if (sqPosX < (ofGetWindowWidth() / 2) - 200) {
        sqPosX = (ofGetWindowWidth() / 2) - 200;
        sqVelX *= -1;
    }
    
    //  Using sine or cosine to create movement of circle
    //  We base the calculation on a changing number
    //  millis() is changing very nicely and consistently for us
    cout << "Elapsed seconds: " << ofGetElapsedTimef() << endl;
    cout << "Cosine of that number: " << cos(ofGetElapsedTimef()) << endl;
    
    //  cosine gives us a number between -1 and 1
    //  over and over.
    //  Multiply it by our magnitude variable (cirMag) to make this
    //  a wider range.
    float offset;
    offset = cos(ofGetElapsedTimef()) * cirMag;
    
    cout << "Multiply cosine by magnitude: " << offset << endl;
    cirPosX = (ofGetWindowWidth() / 2) + offset;
    
    //  try using the mouse as the center point
    // cirPosX = mouseX + offset;
    
    //  how would you make it oscillate faster?
    // offset = cos(ofGetElapsedTimef() * 5.0) * cirMag;
    // cirPosX = mouseX + offset;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofRect(sqPosX, sqPosY, 10, 10);
    ofCircle(cirPosX, cirPosY, 10);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
