//
//  circle.hpp
//  rectangleZeno
//
//  Created by BBbig on 22/02/2017.
//
//

#ifndef circle_hpp
#define circle_hpp

#include <stdio.h>
#include "ofMain.h"
class circle {
    
public:
    
    circle();
    
    void	draw();

    void	zenoToPoint(float catchX, float catchY);
    
    
    ofPoint		pos;
    float		catchUpSpeed;		// take this pct of where I want to be, and 1-catchUpSpeed of my pos
};

#endif /* circle_hpp */
