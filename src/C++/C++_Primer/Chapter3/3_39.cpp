#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string s1 = "hello";
    string s2 = "world";
    string s3 = "hello";

    if (s1 == s2)
        cout << "s1 和 s2 内容相等" << endl;
    else
        cout << "s1 和 s2 内容不相等" << endl;

    if (s1 == s3)
        cout << "s1 和 s3 内容相等" << endl;

    const char* cstr1 = "hello";
    const char* cstr2 = "world";
    const char* cstr3 = "hello";

    if (strcmp(cstr1, cstr2) == 0)
        cout << "cstr1 和 cstr2 内容相等" << endl;
    else
        cout << "cstr1 和 cstr2 内容不相等" << endl;

    if (strcmp(cstr1, cstr3) == 0)
        cout << "cstr1 和 cstr3 内容相等" << endl;

    return 0;
}