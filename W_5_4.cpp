#include <iostream>
#include <cstring>
using namespace std;

class strtype {
    char *p;
    int len;
public:
    strtype();                            // no-parameter constructor
    strtype(const char *s, int size);     // constructor with string and size
    ~strtype();
    char* getstring();
    int getlength();
};

// no-parameter constructor
strtype::strtype() {
    len = 255;
    p = new char[len];
    if(!p) {
        cout << "Allocation error\n";
        exit(1);
    }
    p[0] = '\0'; // initialize as null string
}

// constructor with string and size
strtype::strtype(const char *s, int size) {
    if(size <= 0) size = 1;
    len = size;
    p = new char[len];
    if(!p) {
        cout << "Allocation error\n";
        exit(1);
    }
    // copy string safely with boundary check
    int copyLen = strlen(s);
    if(copyLen >= len) copyLen = len - 1;
    strncpy(p, s, copyLen);
    p[copyLen] = '\0';
}

// destructor
strtype::~strtype() {
    delete [] p;
}

// get string
char* strtype::getstring() {
    return p;
}

// get length
int strtype::getlength() {
    return len;
}

int main() {
    strtype s1;                          
    strtype s2("Hello World", 50);       

    cout << "s1 length: " << s1.getlength() << ", string: \"" << s1.getstring() << "\"\n";
    cout << "s2 length: " << s2.getlength() << ", string: \"" << s2.getstring() << "\"\n";

    return 0;
}
