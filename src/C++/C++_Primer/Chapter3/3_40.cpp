#include <iostream>
#include <cstring>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    char result[100];

    strcpy(result, str1);
    strcat(result, str2);

    printf("拼接结果：%s\n", result);
    return 0;
}