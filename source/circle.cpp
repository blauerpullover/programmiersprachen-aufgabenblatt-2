#include "circle.hpp"

Circle::Circle(Vec2 const& ctr, float r, Color const& clr) :
    center_{ctr},
    radius_{r} {}

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