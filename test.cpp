#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "subs/trim/just_trim.hpp"
#include "list.hpp"


std::vector<std::string> list;
TEST_CASE("simple test") {
    SUBCASE("preparation") {
        list = simple_list::read("example.lst");
    };
    SUBCASE("first element") {
        CHECK(list[0] == "ck.txt");
    };
    SUBCASE("second element") {
        CHECK(list[1] == "dem.term");
    };
};
