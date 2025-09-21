#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class strtype {
    char *p;
public:
    strtype(char *s);               // normal constructor
    strtype(const strtype &o);      // copy constructor
    ~strtype();                     // destructor
    char* get();
};

// normal constructor
strtype::strtype(char *s) {
    int l = strlen(s) + 1;
    p = new char[l];
    if(!p) {
        cout << "Allocation error\n";
        exit(1);
    }
    strcpy(p, s);
}

// copy constructor
strtype::strtype(const strtype &o) {
    int l = strlen(o.p) + 1;
    p = new char[l];
    if(!p) {
        cout << "Allocation error\n";
        exit(1);
    }
    strcpy(p, o.p);
}

// destructor
strtype::~strtype() {
    delete [] p;
}

// get string
char* strtype::get() {
    return p;
}

// fixed show function (pass by reference)
void show(const strtype &x) {
    cout << x.get() << "\n";
}

int main() {
    strtype a("Hello"), b("There");
    show(a);
    show(b);

    return 0;
}
