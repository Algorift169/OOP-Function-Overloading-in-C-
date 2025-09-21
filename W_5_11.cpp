#include <iostream>

using namespace std;

void myclreol(int n = -1) {
    if (n < 0) {
        cout << "\r";             
        cout << string(80, ' '); 
        cout << "\r";             
    } else {
        cout << string(n, ' ');   
    }
}

int main() {
    cout << "Hello World!";
    myclreol(5);                  
    cout << "\nAfter clearing 5 chars\n";

    cout << "Another line!";
    myclreol();                    
    cout << "\nAfter clearing whole line\n";

    return 0;
}
