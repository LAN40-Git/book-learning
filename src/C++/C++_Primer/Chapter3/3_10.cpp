#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);
    for (std::string::size_type i = 0; i < s.size(); ++i) {
        if (std::ispunct(s[i])) {
            s.erase(i, 1);
            --i;
        }
    }
    std::cout << s;
    return 0;
}