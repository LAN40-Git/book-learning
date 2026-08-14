#include <iostream>
#include <vector>

int main() {
    int arr[10], arr2[10];
    for (int i = 0; i < 10; ++i) {
        if (arr[i] != arr2[i]) {
            std::cout << "arr is not equal to arr2" << std::endl;
            break;
        }
    }

    std::vector<int> vec, vec2;
    if (vec != vec2) {
        std::cout << "vec is not equal to vec2";
    }
    return 0;
}