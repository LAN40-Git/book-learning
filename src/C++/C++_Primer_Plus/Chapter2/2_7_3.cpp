#include <iostream>
#include <functional>
#include <string>

auto print_v1 () {
    std::cout << "Three blind mice\n";
}

auto print_v2 () {
    std::cout << "See how they run\n";
}

auto main() -> int {
    print_v1();
    print_v1();
    print_v2();
    print_v2();
    return 0;
}