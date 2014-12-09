//
//  Follower.h
//  class15_attractionAndAcceleration
//
//  Created by Jennifer Presto on 12/8/14.
//
//

#pragma once
#include "ofMain.h"

class Follower {
public:
    
    Follower();
    
    void update();
    void draw();
    
    ofPoint pos, mousePos;
    ofVec2f velocity, accel;
};