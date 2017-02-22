#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "rectangle.h"
#include "circle.hpp"
#include "triangle.hpp"


class ofApp : public ofSimpleApp{

	public:

		void setup();
		void update();
		void draw();

		rectangle myRectangle;
    circle myCircle;
    circle myCircle1;
    circle myCircle2;
    circle myCircle3;
    circle myCircle4;
    circle myCircle5;
    circle myCircle6;
    
    triangle myTriangle;
    triangle myTriangle1;
    triangle myTriangle2;
    triangle myTriangle3;
    triangle myTriangle4;
    triangle myTriangle5;
    triangle myTriangle6;
    
    

};

#endif
