#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //  we use ofPushMatrix and ofPopMatrix to contain translation
    ofPushMatrix();{
        
        //  ofTranslate moves the draw code to a specific position;
        //  here, we move it to the center
        ofTranslate( ofGetWindowSize() / 2 );
        
        ofVec2f mousePos( mouseX, mouseY );
        ofVec2f center( ofGetWindowWidth()/2, ofGetWindowHeight()/2 );
        
        mousePos = mousePos - center;
        
        ofLine( ofPoint(0,0), mousePos );
        
    }ofPopMatrix();

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
