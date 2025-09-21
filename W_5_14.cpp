#include <iostream>

using namespace std;

int f(int a) {
    return a * a;
}

int f(int a, int b = 0) {
    return a * b;
}

int main() {
    cout << f(10, 2) << "\n"; 
    cout << f(10) << "\n";         
    cout << f(10, 0) << "\n";      

    return 0;
}
