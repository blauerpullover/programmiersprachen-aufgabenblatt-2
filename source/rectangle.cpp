#include "rectangle.hpp"
#include <math.h>


Rectangle::Rectangle(Vec2 const& mini, Vec2 const& maxi, Color const& clr) :
    min_{mini},
    max_{maxi} {}

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




