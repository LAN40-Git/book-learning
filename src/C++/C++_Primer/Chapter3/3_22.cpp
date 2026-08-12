#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> text;
    for (auto it = text.begin();
         it != text.end() && !it->empty(); ++it) {
        for (auto &ch : *it) {
            ch = static_cast<char>(std::toupper(ch));
        }
        std::cout << *it << std::endl;
    }
    return 0;
}