#include <iostream>
#include <string>

void process() {
    std::string str, res_str{};
    while (std::cin >> str) {
        res_str += str;
    }
    std::cout << res_str;
}

void processv2() {
    std::string str, res_str{};
    while (std::cin >> str) {
        res_str += " " + str;
    }
    std::cout << res_str;
}

int main() {
    process();
    return 0;
}