#include <iostream>

auto years_to_months(std::size_t years) -> std::size_t {
    return years * 12;
}

auto main() -> int {
    std::cout << "Enter your age: ";
    std::size_t age{0};
    std::cin >> age;
    std::cout << "Months: " << years_to_months(age) << std::endl;
    return 0;
}