#include "cpu.h"

void compute() {
    int *pointer = read();
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += pointer[i];
    }

    std::cout << "Sum = " << sum << endl;
}
