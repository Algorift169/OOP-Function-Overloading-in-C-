#include <iostream>

using namespace std;

class myclass {
public:

    myclass();
    myclass(const myclass &o);
    myclass f();
};

// Normal constructor
myclass::myclass() {
    cout << "Constructing normally\n";
}

// Copy constructor
myclass::myclass(const myclass &o) {
    cout << "Constructing copy\n";
}

// Return an object
myclass myclass::f() {
    myclass temp;
    return temp;
}

int main() {
    myclass obj;
    obj = obj.f();
    return 0;
}
