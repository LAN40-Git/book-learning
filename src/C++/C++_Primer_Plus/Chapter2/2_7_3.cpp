#include <iostream>
#include <functional>
#include <string>

auto println(std::string_view str) -> void {
    std::cout << str << std::endl;
}

auto repeat_println(std::string_view str, std::size_t times) -> void {
    for (std::size_t i = 0; i < times; i++) {
        println(str);
    }
}

auto main() -> int {
    repeat_println("Three blind mice", 2);
    repeat_println("See how they run", 2);
    return 0;
}