#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main() {
    std::vector<std::string> vec;
    std::string s;
    while (std::cin >> s) {
        vec.push_back(s);
    }
    for (auto& str : vec) {
        for (auto& ch : str) {
            ch = static_cast<char>(std::toupper(static_cast<uint8_t>(ch)));
        }

        std::cout << str << std::endl;
    }
    return 0;
}