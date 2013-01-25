//
//  FFTTracer.h
//  FFTMultiScene
//
//  Created by Atsushi Tadokoro on 1/5/13.
//
//

#pragma once
#include "ofMain.h"
#include "fft.h"

class FFTTracer {
public:
    FFTTracer();
    void update();
    void draw();
    
    // ばねのパラメータ
    float stiffness, damping, mass;
    //パーティクルの位置とスピード
    float *magnitude;
    deque<ofVec3f> pos;
    deque<ofVec3f> vel;
    int fft_size;
};


