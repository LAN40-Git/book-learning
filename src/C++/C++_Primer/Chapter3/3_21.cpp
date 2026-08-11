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
    for (auto it = v1.begin(); it != v1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // v2
    std::cout << v2.size() << std::endl;
    for (auto it = v2.begin(); it != v2.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // v3
    std::cout << v3.size() << std::endl;
    for (auto it = v3.begin(); it != v3.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // v4
    std::cout << v4.size() << std::endl;
    for (auto it = v4.begin(); it != v4.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // v5
    std::cout << v5.size() << std::endl;
    for (auto it = v5.begin(); it != v5.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // v6
    std::cout << v6.size() << std::endl;
    for (auto it = v6.begin(); it != v6.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // v7
    std::cout << v7.size() << std::endl;
    for (auto it = v7.begin(); it != v7.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}