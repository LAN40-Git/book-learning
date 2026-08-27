#include <iostream>

int main() {
    int num;
    while (std::cin >> num) {
        if (num == 42)
            break;
    }
}