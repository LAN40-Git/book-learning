#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums{};
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    return 0;
}