#include "kbd.h"

void input(){
    int *pointer = write();

    for (int i = 0; i < 8; ++i) {
        cout << "Enter " << i +1 << " number: ";
        cin >> pointer[i];
    }
}
