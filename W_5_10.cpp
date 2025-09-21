#include <iostream>
#include <cstdlib>

using namespace std;

long mystrtoi(const char *start, char **end, int base = 10) {
    return strtol(start, end, base);
}

int main() {
    const char *str1 = "12345abc";
    char *end1;
    long num1 = mystrtoi(str1, &end1);
    cout << "Number: " << num1 << ", remaining: " << end1 << "\n";

    const char *str2 = "1011xyz";
    char *end2;
    long num2 = mystrtoi(str2, &end2, 2); // base 2
    cout << "Number: " << num2 << ", remaining: " << end2 << "\n";

    return 0;
}
