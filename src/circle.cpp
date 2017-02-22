//
//  circle.cpp
//  rectangleZeno
//
//  Created by BBbig on 22/02/2017.
//
//

#include "circle.hpp"
circle::circle(){
    catchUpSpeed = 0.01f;
}


//------------------------------------------------------------------
void circle::draw() {
    ofFill();
    ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    ofSetColor(255,0,0);
    ofDrawCircle(pos.x, pos.y, 30);
    
}

//------------------------------------------------------------------
void circle::zenoToPoint(float catchX, float catchY){
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
    pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
    
    if (catchX >ofGetWidth()|| catchX<0 ) {
        pos.x = catchX;
        pos.y = catchY;
    }else if (catchY > ofGetHeight() || catchY <0){
        pos.x = catchX *2;
        pos.y = catchY *2;
    }
}
