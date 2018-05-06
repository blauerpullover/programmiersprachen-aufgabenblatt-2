#include "circle.hpp"
#include <math.h>


Circle::Circle(Vec2 const& ctr, float r, Color const& clr) :
    center_{ctr},
    radius_{r},
    color_{clr} {}

void Circle::center(Vec2 const& ctr){   //getter
    center_ = ctr;
}
void Circle::radius(float r){
    radius_ = r;
}

float Circle::radius() const{           //setter        
    return radius_;
}

Vec2 Circle::center() const{
    return center_;
}

float Circle::circumference() const{
    return 2 * M_PI * radius_;
}

void Circle::draw(Window const& w) const {
    float a = 32.0;
    for(int i = 0; i < a; i++){

        w.draw_line( center_.x + radius_ * sin( (2 * M_PI / a) * i),
                     center_.y + radius_ * cos( (2 * M_PI / a) * i),
                     center_.x + radius_ * sin( (2 * M_PI / a) * (i+1)),
                     center_.y + radius_ * cos( (2 * M_PI / a) * (i+1)),
                     color_.r,color_.g,color_.b);
    }

   
    
}

