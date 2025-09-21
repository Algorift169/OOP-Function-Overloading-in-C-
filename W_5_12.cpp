#include <iostream>

using namespace std;

float f(float i) {
    return i / 2.0;
}

double f(double i) {
    return i / 3.0;
}

int main() {
    float x = 10.09;
    double y = 10.09;

    cout << f(x) << "\n";   // unambiguous - calls f(float)
    cout << f(y) << "\n";   // unambiguous - calls f(double)
    cout << f((float)10) << "\n";  // calls f(float)
    cout << f((double)10) << "\n"; // calls f(double)

    return 0;
}
