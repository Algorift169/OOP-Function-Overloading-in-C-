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
    myclass o1[10]; // declaring array without initializers
    myclass o2[10] = {1,2,3,4,5,6,7,8,9,10}; // declare array with initializers

    for(int i=0; i<10; i++) {
        cout << "o1[" << i << "]: " << o1[i].getx() << "\n";
        cout << "o2[" << i << "]: " << o2[i].getx() << "\n";
    }

    return 0;
}
