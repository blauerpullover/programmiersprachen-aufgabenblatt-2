# ifndef VEC2_HPP
# define VEC2_HPP //um Mehrfachinkludierung zu vermeiden
// Vec2 class definition
struct Vec2     // Datentransferobjekt, vektor des R^2
{
    float x;
    float y;

    Vec2() : x(0.0), y(0.0){}  //Initialisierungs Liste
    
    Vec2(float n_x, float n_y) {
        x = n_x;
        y = n_y;
    }


Vec2& operator+=(Vec2 const& v); 
Vec2& operator -=(Vec2 const& v); 
Vec2& operator*=(float s);
Vec2& operator/=(float s);
};




# endif // VEC2_HPP