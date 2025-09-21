#include <iostream>

using namespace std;

int dif(int a, int b) {
    return a - b;
}

float dif(float a, float b) {
    return a - b;
}

int main() {
    // Pointers to functions
    int (*pInt)(int, int) = dif;       
    float (*pFloat)(float, float) = dif; 
    cout << "dif(int): " << pInt(10, 5) << "\n";      
    cout << "dif(float): " << pFloat(10.5, 5.2) << "\n"; 

    return 0;
}
