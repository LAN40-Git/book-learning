#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    int arr[vec.size()];
    for (std::size_t i = 0; i < vec.size(); ++i) {
        arr[i] = vec[i];
    }
    for (const auto &num : arr) {
        std::cout << num << " ";
    }
    return 0;
}