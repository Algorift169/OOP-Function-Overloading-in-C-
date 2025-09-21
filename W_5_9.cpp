#include <iostream>
#include <cctype>

using namespace std;

const int ignore = 0;
const int upper  = 1;
const int lower  = 2;


void print(char *s, int how = -1) {
    static int oldcase = ignore; // reuse last case if none specified
    if(how < 0)
        how = oldcase;

    while(*s) {
        switch(how) {
            case upper: cout << (char)toupper(*s); break;
            case lower: cout << (char)tolower(*s); break;
            default:   cout << *s;
        }
        s++;
    }
    oldcase = how;
}

int main() {
    print("Hello There\n", ignore);
    print("Hello There\n", upper);
    print("Hello There\n");        // continues in upper
    print("Hello There\n", lower);
    print("That's all\n");         // continues in lower
    return 0;
}
