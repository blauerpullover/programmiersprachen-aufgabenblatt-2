#include "rectangle.hpp"
#include <math.h>
#include "window.hpp"


Rectangle::Rectangle(Vec2 const& mini, Vec2 const& maxi, Color const& clr) :
    min_{mini},
    max_{maxi}, 
    color_{clr}{}

void Rectangle::min(Vec2 const& mini){   //getter
    min_ = mini;
}
void Rectangle::max(Vec2 const& maxi){   //getter
    max_ = maxi;
}
Vec2 const& Rectangle::min() const {
    return min_;
}
Vec2 const& Rectangle::max() const {
    return max_;
}

float Rectangle::circumference() const{
    return abs(2 * (max_.x - min_.x) + 2 * (max_.y - min_.y));
}


void Rectangle::draw(Window const& w) const {
    w.draw_line(min_.x, min_.y,                     //erste Linie
                max_.x, min_.y,
                color_.r,color_.g,color_.b                                                        
                );
    w.draw_line(max_.x, min_.y,                     //zweite Linie
                max_.x, max_.y,
                color_.r,color_.g,color_.b
                );
    w.draw_line(max_.x, max_.y,                     //dritte Linie
                min_.x, max_.y,
                color_.r,color_.g,color_.b
                );
    w.draw_line(min_.x, max_.y,                     //vierte Linie
                min_.x, min_.y,
                color_.r,color_.g,color_.b
                );
}

void Rectangle::draw(Window const& w, Color const& clr) const {
    w.draw_line(min_.x, min_.y,                     //erste Linie
                max_.x, min_.y,
               clr.r, clr.g, clr.b                                                        
                );
    w.draw_line(max_.x, min_.y,                     //zweite Linie
                max_.x, max_.y,
                clr.r, clr.g, clr.b
                );
    w.draw_line(max_.x, max_.y,                     //dritte Linie
                min_.x, max_.y,
                clr.r, clr.g, clr.b
                );
    w.draw_line(min_.x, max_.y,                     //vierte Linie
                min_.x, min_.y,
                clr.r, clr.g, clr.b
                );
}


