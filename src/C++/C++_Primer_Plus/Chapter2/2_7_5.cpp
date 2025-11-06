#include <iostream>

auto celsius_to_fahrenheit(double celsius) -> double {
    return celsius * 1.8 + 32;
}

auto main() -> int {
    std::cout << "Please enter a Celsius value: ";
    double celsius;
    std::cin >> celsius;
    std::cout << celsius << " degrees Celsius is " << celsius_to_fahrenheit(celsius) << " degrees Fahrenheit." << std::endl;
    return 0;
}