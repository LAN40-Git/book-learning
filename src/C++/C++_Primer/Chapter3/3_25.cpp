#include <iostream>
#include <vector>

int main() {
    std::vector<int> scores, results(11);
    int score;
    while (std::cin >> score) {
        scores.push_back(score);
    }
    for (const auto &score : scores) {
        if (score < 10) {
            ++results[0];
            continue;
        }
        int index = score / 10;
        ++results[index];
    }
    for (const auto &result : results) {
        std::cout << result << " ";
    }
    return 0;
}