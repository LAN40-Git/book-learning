#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> strs;
    std::string str;
    while (std::cin >> str) {
        strs.push_back(str);
    }
    return 0;
}