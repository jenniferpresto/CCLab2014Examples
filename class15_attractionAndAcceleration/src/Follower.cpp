//
//  Follower.cpp
//  class15_attractionAndAcceleration
//
//  Created by Jennifer Presto on 12/8/14.
//
//

#include "Follower.h"

Follower::Follower() {
    pos.x = ofGetWindowWidth() / 2.0;
    pos.y = ofGetWindowHeight() / 2.0;
    
    velocity.x = ofRandom(-5.0, 5.0);
    velocity.y = ofRandom(-5.0, 5.0);
}

void Follower::update() {
    //  update the object's variable with the mouse position
    mousePos.x = ofGetMouseX();
    mousePos.y = ofGetMouseY();
    
    ofVec2f accel = (mousePos - pos) * 0.01f;
    velocity += accel;
    
    pos += velocity;
    velocity *= 0.97;

}

void Follower::draw() {
    ofCircle(pos, 10);
}
