#include <iostream>

int main() {
    int arr[10];
    int *p = &arr[0];
    for (int i = 0; i < 10; ++i) {
        *p = 0;
        ++p;
    }
    return 0;
}