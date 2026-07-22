#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Enter two numbers:";
    std:: cin >> v1 >> v2;
    if (v1 > v2) {
        std::swap(v1, v2);
    }

    while (v1 <= v2) {
        std::cout << v1 << " ";
        ++v1;
    }
    return 0;
}
