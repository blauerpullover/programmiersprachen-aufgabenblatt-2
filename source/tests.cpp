#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

TEST_CASE("aufgabe2.2","[aufgabe2.2]") {
    Vec2 ohne = Vec2();
    REQUIRE(ohne.x == 0); 
    REQUIRE(ohne.y == 0);

    Vec2 mit = Vec2(3.3,4.4);
    REQUIRE(mit.x == Approx(3.3)); 
    REQUIRE(mit.y == Approx(4.4));
}

TEST_CASE("aufgabe2.3","[aufgabe2.3]"){
    Vec2 a = Vec2(3.0, 4.0);
    a += Vec2(1.0, 1.0);
    REQUIRE(a.x == Approx(4.0)); 
    REQUIRE(a.y == Approx(5.0));
    a -= Vec2(1.0, 1.0);
    REQUIRE(a.x == Approx(3.0)); 
    REQUIRE(a.y == Approx(4.0));
    a *= 2.0;
    REQUIRE(a.x == Approx(6.0)); 
    REQUIRE(a.y == Approx(8.0));
    a /= 2.0;
    REQUIRE(a.x == Approx(3.0)); 
    REQUIRE(a.y == Approx(4.0));
}
