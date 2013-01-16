//
//  FFTFnwrGlitch.h
//  FFTMultiScene
//
//  Created by Atsushi Tadokoro on 1/5/13.
//
//

#pragma once
#include "ofMain.h"

class FFTFnwrGlitch {
public:
    static const unsigned int WIDTH  = 640;
    static const unsigned int HEIGHT  = 480;
    static const unsigned int NUM_PARTICLES  = WIDTH * HEIGHT;
    
    FFTFnwrGlitch();
    void update();
    void draw();
    ofImage fnwr;
    ofVbo myVbo;
    ofVec3f myVerts[NUM_PARTICLES];
	ofFloatColor myColor[NUM_PARTICLES];
    unsigned char *pixels;
    int zMax;
};

