#include <iostream>

int main() {
    int a = 10, b = 20;
    int *p = &a;
    p = &b;
    *p = 30;
    std::cout << a << " " << b << std::endl;
    return 0;
}