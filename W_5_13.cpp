#include <iostream>

using namespace std;

void f(unsigned char c) {
    cout << c;
}

void f(char c) {
    cout << c;
}

int main() {
    f('c');     
    
    f((char)86);         
    f((unsigned char)86); 
    return 0;
}
