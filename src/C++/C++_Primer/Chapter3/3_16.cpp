#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> v1;
    std::vector<int> v2(10);
    std::vector<int> v3(10, 42);
    std::vector<int> v4{10};
    std::vector<int> v5{10, 42};
    std::vector<std::string> v6{10};
    std::vector<std::string> v7{10, "hi"};

    // v1
    std::cout << v1.size() << std::endl;
    for (auto& num : v1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // v2
    std::cout << v2.size() << std::endl;
    for (auto& num : v2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // v3
    std::cout << v3.size() << std::endl;
    for (auto& num : v3) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // v4
    std::cout << v4.size() << std::endl;
    for (auto& num : v4) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // v5
    std::cout << v5.size() << std::endl;
    for (auto& num : v5) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // v6
    std::cout << v6.size() << std::endl;
    for (auto& s : v6) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    // v7
    std::cout << v7.size() << std::endl;
    for (auto& s : v7) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    return 0;
}