#include <iostream>

void light_years_to_astronomical_units(double light_years) {
    std::cout << light_years << " light years = " << light_years * 63240 << " astronmical units.";
}

auto main() -> int {
    std::cout << "Enter the number of light years: ";
    double light_years{};
    std::cin >> light_years;
    light_years_to_astronomical_units(light_years);
    return 0;
}