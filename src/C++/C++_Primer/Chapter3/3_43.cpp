#include <iostream>
int ia[3][4];

void process() {
    for (const int (&i)[4] : ia) {
        for (const int &j : i) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

void processv2() {
    for (size_t i = 0; i < 3; ++i) {
        for (size_t j = 0; j < 4; ++j) {
            std::cout << ia[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void processv3() {
    for (int (*i)[4] = ia; i < ia + 3; ++i) {
        for (int *j = *i; j < *i + 4; ++j) {
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