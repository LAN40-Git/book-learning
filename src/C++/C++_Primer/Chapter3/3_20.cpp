#include <iostream>
#include <vector>

void process() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    for (std::size_t i = 0; i < nums.size() - 1; ++i) {
        std::cout << nums[i] + nums[i+1] << std::endl;
    }
}

void processv2() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    for (std::size_t i = 0, j = nums.size() - 1; i <= j; ++i, --j) {
        std::cout << nums[i] + nums[j] << std::endl;
    }
}

int main() {
    process();
    // processv2();
    return 0;
}