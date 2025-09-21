#include <iostream>
#include <ctime>

using namespace std;

class stopwatch {
    clock_t startTime;

public:

    stopwatch();
    stopwatch(clock_t sysTime);
    void showElapsed();
};

// parameterless constructor
stopwatch::stopwatch() {
    startTime = clock();
}

// constructor with system time
stopwatch::stopwatch(clock_t sysTime) {
    startTime = sysTime;
}

// show elapsed time in seconds
void stopwatch::showElapsed() {
    clock_t endTime = clock();
    double elapsed = double(endTime - startTime) / CLOCKS_PER_SEC;
    cout << "Elapsed time: " << elapsed << " seconds\n";
}

int main() {
    stopwatch sw1; 
    cout << "Stopwatch 1 running...\n";
    for(volatile int i=0; i<100000000; i++); // delay
    sw1.showElapsed();

    clock_t sysTime = clock();
    stopwatch sw2(sysTime); 
    cout << "Stopwatch 2 running...\n";
    for(volatile int i=0; i<50000000; i++); // delay
    sw2.showElapsed();

    return 0;
}
