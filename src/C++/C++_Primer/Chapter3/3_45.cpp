#include <iostream>
int ia[3][4];

void process() {
    for (const auto &i : ia) {
        for (const auto& j : i) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

void processv2() {
    for (auto i = 0; i < 3; ++i) {
        for (auto j = 0; j < 4; ++j) {
            std::cout << ia[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void processv3() {
    for (auto i = ia; i < ia + 3; ++i) {
        for (auto j = *i; j < *i + 4; ++j) {
            std::cout << *j << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    process();
    processv2();
    processv3();
    return 0;
}