#include <iostream>

auto long_to_yard(long n) -> long {
    return n * 220;
}

auto main() -> int {
    long n;
    std::cout << "Enter a long: ";
    std::cin >> n;
    std::cout << "yard: " << long_to_yard(n);
    return 0;
}