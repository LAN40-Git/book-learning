#include <iostream>

static void practice_1_9()
{
    std::cout << "This is practice 1.9" << std::endl;
    int sum = 0;
    for (int i = 50; i <= 100; ++i) {
        sum += i;
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
}

static void practice_1_10()
{
    std::cout << "This is practice 1.10" << std::endl;
    for (int val = 10; val >= 0; --val) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

static void practice_1_11()
{
    std::cout << "This is practice 1.11" << std::endl;
    int v1 = 0, v2 = 0;
    std::cout << "Enter two numbers:";
    std:: cin >> v1 >> v2;
    if (v1 > v2) {
        std::swap(v1, v2);
    }

    for (; v1 <= v2; ++v1) {
        std::cout << v1 << " ";
    }
}

int main()
{
    practice_1_9();
    practice_1_10();
    practice_1_11();
    return 0;
}
