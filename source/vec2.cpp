#include "vec2.hpp"

//2.3
    Vec2& Vec2::operator+=(Vec2 const& v){
        x += v.x;
        y += v.y;
        return *this;
    }
    Vec2& Vec2::operator-=(Vec2 const& v){
        x -= v.x;
        y -= v.y;
        return *this;
    } 
    Vec2& Vec2::operator*=(float s){
        x *= s;
        y *= s;
        return *this;
    }
    Vec2& Vec2::operator/=(float s){
        x /= s;
        y /= s;
        return *this;
    }

//2.4
    Vec2 operator+(Vec2 const& u, Vec2 const& v){
        return Vec2{u} += v; // kopie von u (Kopiekonstruktor)
    } 

    Vec2 operator-(Vec2 const& u, Vec2 const& v){
     return Vec2{u} -= v; // kopie von u (Kopiekonstruktor)
    } 
    Vec2 operator*(Vec2 const& v, float s){
   return Vec2{v} *= s; // kopie von u (Kopiekonstruktor)
    }

    Vec2 operator/(Vec2 const& v, float s){
       return Vec2{v} /= s; // kopie von u (Kopiekonstruktor)
    }
    Vec2 operator*(float s, Vec2 const& v){
        return Vec2{v} *= s; // kopie von u (Kopiekonstruktor)
    }