//
//  triangle.cpp
//  rectangleZeno
//
//  Created by BBbig on 22/02/2017.
//
//

#include "triangle.hpp"

triangle::triangle(){
    catchUpSpeed = 10;
}

//------------------------------------------------------------------
void triangle::draw() {
    ofFill();
//    ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    ofSetColor(255,125,16);
    ofDrawTriangle(pos.x, pos.y, pos.x+30, pos.y+30, pos.x-30, pos.y+30);
}

//------------------------------------------------------------------
void triangle::zenoToPoint(float catchX, float catchY){
    pos.x = pos.x +(catchX - pos.x)/ofDist(pos.x, pos.y, catchX, catchY);
    pos.y = pos.y +(catchY - pos.y)/ofDist(pos.x, pos.y, catchX, catchY);
}
