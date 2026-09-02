#include <iostream>

void process(int grade) {
    std::cout << (grade > 90 ? "high pass" : (grade > 75 ? "pass" : (grade > 60 ? "low pass" : "fail")));
}

void processv2(int grade) {
    if (grade > 90) {
        std::cout << "high pass";
    } else if (grade > 75) {
        std::cout << "pass";
    } else if (grade > 60) {
        std::cout << "low pass";
    } else {
        std::cout << "fail";
    }
}

int main() {
    int grade;
    std::cin >> grade;
    process(grade);
    // processv2(grade);
}