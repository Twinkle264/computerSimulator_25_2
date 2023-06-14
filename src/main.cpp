#include <iostream>
#include "disk.h"
#include "cpu.h"
#include "gpu.h"
#include "kbd.h"

int main() {
    string command;

    while (true) {
        cout << "Enter the command: ";
        cin >> command;

        if (command == "sum") {
            compute();
        } else if (command == "save") {
            save();
        } else if (command == "load") {
            load();
        } else if (command == "input") {
            input();
        } else if (command == "display") {
            display();
        } else if (command == "exit") {
            break;
        }
    }
    return 0;
}
