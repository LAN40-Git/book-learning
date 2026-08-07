#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    for (auto &ch : s) {
        ch = 'X';
    }
    std::cout << s;
    return 0;
}