#include <iostream>
#include <cstdlib>

using namespace std;

class array {
    int *p;
    int size;
public:
    array(int sz);              // normal constructor
    array(const array &a);      // copy constructor
    ~array();                   // destructor
    void put(int i, int j);
    int get(int i);
};

// normal constructor
array::array(int sz) {
    p = new int[sz];
    if(!p)
        exit(1);
    size = sz;
    cout << "Using 'normal' constructor\n";
}

// copy constructor
array::array(const array &a) {
    size = a.size;
    p = new int[a.size];       // allocate memory for copy
    if(!p)
        exit(1);
    for(int i=0; i<a.size; i++)
        p[i] = a.p[i];         // copy contents
    cout << "Using copy constructor\n";
}

// destructor
array::~array() {
    delete [] p;
}

// put value into array
void array::put(int i, int j) {
    if(i >= 0 && i < size)
        p[i] = j;
}

// get value from array
int array::get(int i) {
    return p[i];
}

int main() {
    array num(10); // calls normal constructor
   
    for(int i=0; i<10; i++)
        num.put(i, i);

    for(int i=9; i>=0; i--)
        cout << num.get(i);
    cout << "\n";

    array x = num; // calls copy constructor

    for(int i=0; i<10; i++)
        cout << x.get(i);
    cout << "\n";

    return 0;
}
