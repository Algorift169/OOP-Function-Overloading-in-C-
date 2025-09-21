#include <iostream>

using namespace std;

class myclass {
    int x;
public:
    myclass();
    myclass(int n);
    int getx();
};

// constructors
myclass::myclass() {
    x = 0;
}

myclass::myclass(int n) {
    x = n;
}

int myclass::getx() {
    return x;
}

int main() {
    myclass o1(10); // declare with initial value
    myclass o2;     // declare without initializer

    cout << "o1: " << o1.getx() << "\n";
    cout << "o2: " << o2.getx() << "\n";

    return 0;
}
