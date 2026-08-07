#include <string>
#include <iostream>

void process() {
    std::string str1, str2;
    std::cin >> str1 >> str2;
    if (str1 > str2) {
        std::cout << str1;
    } else if (str1 < str2) {
        std::cout << str2;
    }
}

void processv2() {
    std::string str1, str2;
    std::cin >> str1 >> str2;
    if (str1.length() > str2.length()) {
        std::cout << str1;
    } else if (str1.length() < str2.length()) {
        std::cout << str2;
    }
}

int main() {
    process();
    // processv2();
    return 0;
}