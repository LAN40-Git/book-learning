#include <iostream>
#include <vector>

int main() {
    int arr[10], arr2[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = i;
    }
    for (int i = 0; i < 10; ++i) {
        arr2[i] = arr[i];
    }

    std::vector<int> vec(10), vec2(10);
    for (int i = 0; i < 10; ++i) {
        vec[i] = i;
    }
    vec2 = vec;
}