#include <iostream>
#include <vector>

void process() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        std::cout << *it + *(it+1) << std::endl;
    }
}

void processv2() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    for (auto lit = nums.begin(), rit = nums.end();  lit != rit; ++lit, --rit) {
        std::cout << *lit + *rit << std::endl;
    }
}

int main() {
    process();
    // processv2();
    return 0;
}