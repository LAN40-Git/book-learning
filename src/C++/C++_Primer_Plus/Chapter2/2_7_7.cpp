#include <iostream>

void print_result(int hours, int minutes) {
    std::cout << "Time: " << hours << ":" << minutes;
}

auto main() -> int {
    int hours{}, minutes{};
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;
    print_result(hours, minutes);
    return 0;
}