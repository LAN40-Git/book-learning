#include <iostream>
#include <vector>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> vec(std::begin(arr), std::end(arr));
    for (const auto &num : vec) {
        std::cout << num << " ";
    }
    return 0;
}