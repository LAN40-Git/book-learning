#include <iostream>
int ia[3][4];

void process() {
    using int_array_quote = const int (&)[4];
    using int_quote = const int&;

    for (int_array_quote i : ia) {
        for (int_quote j : i) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

void processv2() {
    using SIZE_T = size_t;
    for (SIZE_T i = 0; i < 3; ++i) {
        for (SIZE_T j = 0; j < 4; ++j) {
            std::cout << ia[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void processv3() {
    using int_array_pointer = int (*)[4];
    using int_pointer = int*;

    for (int_array_pointer i = ia; i < ia + 3; ++i) {
        for (int_pointer j = *i; j < *i + 4; ++j) {
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