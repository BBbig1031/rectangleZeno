#include "ofApp.h"
#include "ofMain.h"


ofFbo fbo;

//--------------------------------------------------------------
void ofApp::setup(){
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA32F);  // higher precision alpha (no artifacts)
    
    fbo.begin();
    ofClear(255,255,255, 0);
    fbo.end();
    
	// macs by default run on non vertical sync, which can make animation very, very fast
	// this fixes that: 
	ofSetVerticalSync(true);

	// set background: 
	ofEnableAlphaBlending();
	ofBackground(30,30,30);

	// set the position of the rectangle:
	myRectangle.pos.x = 100;
	myRectangle.pos.y = 50;
    
    myCircle.pos.x = ofRandom(0, ofGetWidth());
    myCircle.pos.y = ofRandom(0, ofGetHeight());
    myCircle1.pos.x = ofRandom(0, ofGetWidth());
    myCircle1.pos.y = ofRandom(0, ofGetHeight());
    myCircle2.pos.x = ofRandom(0, ofGetWidth());
    myCircle2.pos.y = ofRandom(0, ofGetHeight());
    myCircle3.pos.x = ofRandom(0, ofGetWidth());
    myCircle3.pos.y = ofRandom(0, ofGetHeight());
    myCircle4.pos.x = ofRandom(0, ofGetWidth());
    myCircle4.pos.y = ofRandom(0, ofGetHeight());
    myCircle5.pos.x = ofRandom(0, ofGetWidth());
    myCircle5.pos.y = ofRandom(0, ofGetHeight());
    myCircle6.pos.x = ofRandom(0, ofGetWidth());
    myCircle6.pos.y = ofRandom(0, ofGetHeight());
    
    myTriangle.pos.x =100;
    myTriangle.pos.y =50;
    myTriangle1.pos.x = 120;
    myTriangle1.pos.y = 70;
    myTriangle2.pos.x = 140;
    myTriangle2.pos.y = 90;
    myTriangle3.pos.x = 160;
    myTriangle3.pos.y = 50;
    myTriangle4.pos.x = 180;
    myTriangle4.pos.y = 50;
    myTriangle5.pos.x = 200;
    myTriangle5.pos.y = 50;
    myTriangle6.pos.x = 220;
    myTriangle6.pos.y = 50;
    
}

//--------------------------------------------------------------
void ofApp::update(){
	 myRectangle.zenoToPoint(mouseX, mouseY);
     myCircle.zenoToPoint(mouseX, mouseY);
     myCircle1.zenoToPoint(mouseX, mouseY);
     myCircle2.zenoToPoint(mouseX, mouseY);
     myCircle3.zenoToPoint(mouseX, mouseY);
     myCircle4.zenoToPoint(mouseX, mouseY);
     myCircle5.zenoToPoint(mouseX, mouseY);
     myCircle6.zenoToPoint(mouseX, mouseY);
     myTriangle.zenoToPoint(mouseX, mouseY);
     myTriangle1.zenoToPoint(mouseX, mouseY);
     myTriangle2.zenoToPoint(mouseX, mouseY);
     myTriangle3.zenoToPoint(mouseX, mouseY);
     myTriangle4.zenoToPoint(mouseX, mouseY);
     myTriangle5.zenoToPoint(mouseX, mouseY);
     myTriangle6.zenoToPoint(mouseX, mouseY);

}

//--------------------------------------------------------------
void ofApp::draw(){
    fbo.begin();
    ofSetColor(0,0,0, 10); // black with alpha
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
   
	myRectangle.draw();
    myCircle.draw();
    myCircle1.draw();
    myCircle2.draw();
    myCircle3.draw();
    myCircle4.draw();
    myCircle5.draw();
    myCircle6.draw();
    
    myTriangle.draw();
    myTriangle1.draw();
    myTriangle2.draw();
    myTriangle3.draw();
    myTriangle4.draw();
    myTriangle5.draw();
    myTriangle6.draw();
    
    fbo.end();
    
//    ofSetColor(255,255,255);
    fbo.draw(0,0);
}
