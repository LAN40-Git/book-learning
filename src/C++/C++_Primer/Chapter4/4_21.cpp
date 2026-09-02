#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums{1, 2, 3, 4, 5};
    for (auto& num : nums) {
        num = num % 2 == 0 ? num : num * 2;
        std::cout << num << " ";
    }
}