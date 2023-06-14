#include "gpu.h"

void display() {
    int *pointer = read();
    for (int i = 0; i < 8; ++i) {
        cout << pointer[i] << " ";
    }
    cout << endl;
}

