#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

const int SIZE = 1000000; // Large number for testing

int main() {
    int* arr = new int[SIZE]; // Dynamically allocate array
    vector<int> vec(SIZE); // Vector with same size

    // Fill them with values
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i;
        vec[i] = i;
    }

    // Measure time for array access
    clock_t start = clock();
    volatile int sumArr = 0; // Use volatile to prevent optimization
    for (int i = 0; i < SIZE; i++) {
        sumArr += arr[i];
    }
    clock_t end = clock();
    double arrayTime = double(end - start) / CLOCKS_PER_SEC;
    cout << "Array access time: " << arrayTime << " seconds" << endl;

    // Measure time for vector access
    start = clock();
    volatile int sumVec = 0;
    for (int i = 0; i < SIZE; i++) {
        sumVec += vec[i];
    }
    end = clock();
    double vectorTime = double(end - start) / CLOCKS_PER_SEC;
    cout << "Vector access time: " << vectorTime << " seconds" << endl;

    delete[] arr; // Free allocated memory
    return 0;
}
