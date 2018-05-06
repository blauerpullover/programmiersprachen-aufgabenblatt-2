#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "vec2.hpp"
#include "color.hpp"
#include <math.h>

class Circle{
    public:
        Circle(Vec2 const& ctr, float r, Color const& clr);
        void center (Vec2 const& ctr);
        Vec2 center() const;
        void radius (float r); //setter
        float radius() const; //getter
        float circumference() const;
        void color(Color const& clr);
        Color color() const;

    private:
        Vec2 center_;
        float radius_;
        Color color_;
};




#endif