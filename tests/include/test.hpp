#include <catch2/catch.hpp>
#include <parser/expression.hpp>
#include <parser/type.hpp>
#include <parser/types.hpp>
//using namespace std;
/**
 bool = types <int, char, string> | identical
 
 */

struct A{};

auto run () -> int 
{
    constexpr A a;
    constexpr auto a0 = types <A, char, int> | ;
    auto e0 = type <int> ;
}


